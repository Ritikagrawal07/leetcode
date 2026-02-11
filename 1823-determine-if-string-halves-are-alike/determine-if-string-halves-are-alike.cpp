class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char>isVowel 
        = {'a','e','i','o','u' ,'A','E','I','O','U'};
        int count1 = 0;
        int n = s.length();
        for(int i = 0 ; i  < (s.length())/2 ; i++){
         if(isVowel.count(s[i]))count1++;
        }
        int count2 = 0;
        for(int j = n/2 ; j < n ; j++){
            if(isVowel.count(s[j]))count2++;
        }

        
        return count1 == count2;
    }
};