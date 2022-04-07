class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size= nums.size();
        vector<int> dp(size);
        int global_max = nums[0];
        dp[0]=nums[0];
        for(int i=1; i<size;++i){
            dp[i]=nums[i]+max(dp[i-1],0);
            global_max = max(global_max,dp[i]);
        }
        return global_max;
    }
};