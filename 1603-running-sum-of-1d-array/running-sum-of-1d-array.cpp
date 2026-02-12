class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         int n= nums.size();
        vector<int>ans;
         int tempSum =0;
        for(int i = 0 ; i < n ; i++){
        
          tempSum += nums[i];
          ans.push_back(tempSum);
        }return ans;
    }
};