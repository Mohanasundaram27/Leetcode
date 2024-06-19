class Solution {
    public List<List<Integer>> generate(int n) {
        
    List<List<Integer>> pascal =new ArrayList();
        for(int i=0;i<n;i++)
        {
            List<Integer> row =new ArrayList();
            
            for(int j=0;j<=i;j++)
            {
                if(j==0|| j==i)
                {
                    row.add(1);
                }
                else
                {
                    List<Integer> prev= pascal.get(i-1);
                    row.add(prev.get(j)+prev.get(j-1));
                    
                }
            }
            pascal.add(row);
            
        }
        return pascal;
        
    }
}