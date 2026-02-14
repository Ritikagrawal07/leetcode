class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxSoFar = nums[0];
        int minSoFar = nums[0];
        int ans = nums[0];

        int n = nums.size();
       
        for(int i = 1 ;i < n ;i++){
           
           if(nums[i] < 0)swap(minSoFar,maxSoFar);
           maxSoFar = max(nums[i],maxSoFar * nums[i]);
           minSoFar = min(nums[i] , minSoFar * nums[i]);

           ans = max(ans,maxSoFar);
        }
        return ans;
    }
};