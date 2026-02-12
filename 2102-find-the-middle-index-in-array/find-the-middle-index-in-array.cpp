class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        //2,3,-1,8,4
        int n = nums.size();
        int totalSum = 0 ;
        for(int i = 0  ; i < n ; i++){
            totalSum += nums[i];
        }

        int leftSum = 0 ;
        for(int i = 0; i< n ;i++){
            int rightSum = totalSum-nums[i]-leftSum;

            if(leftSum == rightSum){
                return i;
            }else{
            leftSum += nums[i];
            }
        }return -1;
    }
};