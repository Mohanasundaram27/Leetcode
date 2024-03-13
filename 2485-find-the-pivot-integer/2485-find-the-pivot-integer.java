class Solution {
    public int pivotInteger(int n) {
        int result=-1;
        int sum1=0;
        int sum2=0;
        for(int i=1;i<=n;i++){
            sum1+=i;
            for(int j=i;j<=n;j++){
                sum2+=j;
            }
            if(sum1==sum2){
                result=i;
                break;
            }
           sum2=0;
        }
        
        return result;
    }
}