class Solution {
public:
    
    //helper is the solution to house robber one
    int helper(vector<int>& nums) {
        
        int size =  nums.size();
        if(size==0){
            return 0;
        }
        if (size==1){
            return nums[0];
        }
        vector<int> dp(size);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        
        for(int i=2; i<size;++i){
            dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[size-1];
    }
    // Since we can only take the first or the last elt one at a time
    // Simply call the house robber I function twice, each time removing the first or the last elt
    // return the max
    int rob(vector<int> & nums){
        int size =  nums.size();
        if(size==0){
            return 0;
        }
        if (size==1){
            return nums[0];
        }
        vector<int> lower (nums.begin(), nums.end()-1);
        vector<int> upper (nums.begin()+1, nums.end());
        
        return max(helper(lower), helper(upper));
    }
};