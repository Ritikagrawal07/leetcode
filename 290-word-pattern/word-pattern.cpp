class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
     vector<string>words;
      string word = "";

     for(int i = 0 ; i  < s.length() ; i++){
        if(s[i] == ' '){
         words.push_back(word);
         word = "";
        }else{
            word += s[i];
        }

     }
     words.push_back(word);//last word as after last word there is not space so pushing separately 


     if(words.size() != pattern.length())return false;

     unordered_map<char,string>patternToWords;
     unordered_map<string,char>wordsToPattern;

     for(int i = 0 ; i <  pattern.length() ;i++){
        char ch = pattern[i] ;
        string w = words[i];


        // if matching exist but mismatch patternToWords wordsToPattern
        if(wordsToPattern.count(w) && wordsToPattern[w] != ch)return false;
        if(patternToWords.count(ch) && patternToWords[ch] != w)return false;

        patternToWords[ch] = w;
        wordsToPattern[w] = ch;

     }
     return true;



    }
};