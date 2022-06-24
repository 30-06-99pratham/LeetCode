class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.begin(),nums.end());
        int l=0;
        int n = nums.size()-1;
        int r=n;
        while(n>=0){
            if(nums[l]*nums[l] < nums[r]* nums[r]){
                ans[n] = nums[r]*nums[r];
                r--;
                n--;
            }
            else{
                ans[n] = nums[l]*nums[l];
                l++;
                n--;
            }
        }
        return ans;
    }
};
