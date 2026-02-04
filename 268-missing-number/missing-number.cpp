class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n  = nums.size() ; 

        int totalsum = n *(n+1) / 2;

        int partialSum =  0;

        for(int i = 0 ;  i < n ; i++){
            partialSum = partialSum + nums[i];

        }
        return totalsum - partialSum;
    }
};