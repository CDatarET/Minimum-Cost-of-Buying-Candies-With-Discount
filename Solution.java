class Solution {
    public int minimumCost(int[] cost) {
        Arrays.sort(cost);
        int j = 0;
        int ret  = 0;
        for(int i = cost.length - 1; i >= 0; i--){
            if(j++ < 2){
                ret += cost[i];
            }
            else{
                j = 0;
            }
        }

        return ret;
    }
}
