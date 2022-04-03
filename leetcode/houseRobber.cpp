class Solution {
public:
    
    //We can either take an element in the middle, or the 2 elements that surround it.
    //We can do this operation for each index > 2
    //For index 0 our dp is 0 
    // For index 1 our dp is the max of index 1 and 0.
    // Here the dp represents the maximum amount we can rob so far.
    // Thus we return dp[size-1] : the last element
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size==0){
            return 0;
        }
        if(size==1){
            return nums[0];
        }
        vector<int> dp(size);
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        for(int i=2; i<size; ++i){
            dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[size-1];
    }
};