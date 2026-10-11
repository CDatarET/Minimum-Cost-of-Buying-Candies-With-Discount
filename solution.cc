class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int ret = 0;
        int j = 0;
        for(int i = cost.size() - 1; i >= 0; i--){
            if(j++ < 2){
                ret += cost[i];
            }
            else{
                j = 0;
            }
        }

        return ret;
    }
};
