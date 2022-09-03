class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int cnt = 1, ans = 1;
        for(int i = 0;i < n - 1; i++){
            if(nums[i]<nums[i+1]){
                cnt++;
                ans = max(ans, cnt);
            }
            else{
                cnt = 1;
            }
        }
        return ans;
    }
};