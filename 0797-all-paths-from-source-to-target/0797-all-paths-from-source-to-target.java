import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
        List<List<Integer>> totalPaths = new ArrayList<>();
        List<Integer> eachPath = new ArrayList<>();
        int nodes = graph.length;
        if (nodes == 0)
            return totalPaths;
        dfs(graph, totalPaths, eachPath, 0, nodes - 1);

        return totalPaths;
    }

    private void dfs(int[][] graph, List<List<Integer>> totalPaths, List<Integer> eachPath, int start, int destination) {
        eachPath.add(start);
        if (start == destination) {
            totalPaths.add(new ArrayList<>(eachPath));
            return;
        }
        for (int next : graph[start]) {
            dfs(graph, totalPaths, eachPath, next, destination);
            eachPath.remove(eachPath.size() - 1);
        }
    }
}
