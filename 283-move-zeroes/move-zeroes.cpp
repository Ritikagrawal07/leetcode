class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        

        int idx = 0;
        int val=0;
        int count =0 ;
        for(int i = 0 ; i< nums.size();i++){
            if(nums[i]!= val){
                nums[idx]=nums[i];
                idx++;
                count++;
            }

        }
        for(int j =count;j<nums.size();j++){
            nums[j] = 0;
        }
        
    }
};