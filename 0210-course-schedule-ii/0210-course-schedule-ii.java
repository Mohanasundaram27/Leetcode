class Solution {
    public int[] findOrder(int numCourses, int[][] prerequisites) {
        int[] topo = new int[numCourses];
        List<Integer>[] graph= new List[numCourses];
        Queue<Integer> q = new LinkedList<>();
        int[] indegree = new int[numCourses];

         for(int i=0;i<numCourses;i++){
            graph[i]=new ArrayList<Integer>();
        }

        for(int i=0;i<prerequisites.length;i++){
           indegree[prerequisites[i][0]]++;
           graph[(prerequisites[i][1])].add(prerequisites[i][0]);
        }

        for(int i=0;i<numCourses;i++){
            if(indegree[i] == 0){
                q.add(i);
            }
        }

        int count = 0;
        while(q.size()>0){
            int size = q.size();
            while(size-->0){
                int curr = q.remove();
                topo[count]= curr;
                count++;
                for(int course:graph[curr]){
                    indegree[course]--;
                    if(indegree[course] == 0){
                        q.add(course);
                    }
                }
            }
        }
        if(count == numCourses)
        return topo;
        else return new int[0];
    }
}