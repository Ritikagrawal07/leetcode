class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int cntOnes=0;
        int maxOnes =0 ;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                cntOnes++;
                maxOnes = max(cntOnes,maxOnes);
            }
            else{
                cntOnes = 0;
            }
        }
        return maxOnes;
    }
};