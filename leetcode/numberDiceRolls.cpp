// Author Elie Moutran
// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/
class Solution {
public:
    int mod=1000000007;int dp[31][1001];
    int solve(int n,int k,int target)
    {
        if(target==0 && n==0){
            return 1;
        }
        if(n==0){
            return 0;
        }
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        int ans=0;
        for(int i=1;i<=k;i++){
            if(target-i>=0){
                ans=(ans+solve(n-1,k,target-i))%mod;
            }
        }
        return dp[n][target]=ans;

    }        
    
    
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return solve(n,k,target)%mod;
    }  
};