class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mp;
        // number -> index
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]] = i;
        }
        for(int j = 0 ; j < nums.size() ; j++){
            int complement = target - nums[j];
            if(mp.find(complement) != mp.end() && mp[complement] != j){
                return {j,mp[complement]};
            }
        }

        return {};
    }
};