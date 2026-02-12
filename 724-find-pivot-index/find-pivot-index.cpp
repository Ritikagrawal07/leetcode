class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0 ;
        int n = nums.size();
        int leftSum = 0 ;
        for(int i = 0  ; i  < n ; i++){
            totalSum += nums[i];
        }

        for(int i = 0  ; i < n ; i++){
         int rightSum = totalSum - leftSum - nums[i];
         if(leftSum == rightSum)return i;
         else{
            leftSum += nums[i];
         }
        }return -1;
    }
};