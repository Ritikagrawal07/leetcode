class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>unq;
        for(auto i : nums){
            unq[i]++;
        }
        int sum = 0;
        for(auto it : unq){
            if(it.second == 1){
              sum += it.first;
            }
        }return sum;
    }
};