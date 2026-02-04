class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> my_map;
        for(char ch : s){
            my_map[ch]++;
        }
        int maxVowelCount = 0;
        int maxConstCount =0 ;

        for(auto it : my_map){
            char ch = it.first;
            int freq = it.second;
            if(ch == 'a' || ch== 'e'||
             ch == 'i' || ch == 'o' || ch == 'u' ){
                maxVowelCount = max(maxVowelCount,freq);
            }
            else{
                maxConstCount = max(maxConstCount,freq);
            }

        }
        return maxVowelCount+maxConstCount;
    }
};