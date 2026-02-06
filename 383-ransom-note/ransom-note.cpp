class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>freq1;
     
        for(auto it : magazine){
            freq1[it]++;
        }
       

        for(auto ch1 : ransomNote){
            if(freq1[ch1] == 0)return false;
             freq1[ch1]--;
        }
        return true;
       

    }
};