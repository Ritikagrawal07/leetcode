class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> charFreq;

        for(int i = 0 ; i < chars.length() ; i++){
            charFreq[chars[i]]++;
        }


        //check each word
        int ans = 0 ;
        for(string word : words){
            unordered_map<char,int>wordFreq;
            bool canForm = true;

            for(char c : word){
             wordFreq[c]++;

             if(wordFreq[c] > charFreq[c]){
                canForm = false;
                break;
             }
            }
            if(canForm){
                ans += word.length();
            }

        }return ans;
    }
};