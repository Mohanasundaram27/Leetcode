class Solution {
    public int[] missingRolls(int[] rolls, int mean, int n) {
        int sum=0;
        for(int i:rolls){
            sum+=i;
        }
        int m=rolls.length;
        int k=n+m;
        int total=k*mean;
        int rem=total-sum;
        if(6*n<rem || rem<n){
            return new int[0];
        }
        int[] res= new int[n];
        int f=rem/n;
        int mod=rem%n;
        Arrays.fill(res,f);
        for(int i=0;i<n && mod>0;i++){
            res[i]++;
            mod--;
        }
        return res;
    }
}