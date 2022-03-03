class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        if(n<3){
            return 0;
        }
        int dp[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=0;
        }
        for(int i=2;i<n;i++){
            if(nums[i] - nums[i-1] == nums[i-1]-nums[i-2]){
                dp[i]=dp[i-1]+1;
                count+=dp[i];
            }
        }
        return count;
    }
};

/* 

approch- 
  1. we will write the base condition.
  2. make a 1d dp array
  3. start from 3rd index in array and check whether the difference between last,seconD last and second last,3rd last is same OR NOT
  4. and keep count of ongoing sum
  
