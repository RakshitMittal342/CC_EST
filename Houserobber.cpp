class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        if(n==3) return max(nums[0]+nums[2],nums[1]);
        dp[0]=nums[0];
        dp[1]= max(nums[0],nums[1]);
        dp[2]= max(nums[0]+nums[2],nums[1]);
        for(int i=3;i<n;i++){
            int a=dp[i-1];
            int b=max(dp[i-2]+nums[i],dp[i-3]+nums[i]);
            dp[i]=max(a,b);
        }
        return dp[n-1];
    }
};
