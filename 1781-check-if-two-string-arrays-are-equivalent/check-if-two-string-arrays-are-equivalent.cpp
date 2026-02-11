class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sum1 = "";
        for(int i = 0 ; i < word1.size(); i++){
         sum1 += word1[i];
        }
       string sum2 = "";
       for(int j = 0 ; j< word2.size();j++){
          sum2 += word2[j];
       }

       if(sum1.length() != sum2.length())return false;

       int lp1 = 0;
       int lp2 = 0;

       int n = sum1.length();
       for(int i = 0 ; i < n ;i++){
        if(sum1[lp1] != sum2[lp2]){
            return false;
        }
        lp1++;
        lp2++;
       } 
    return lp1 == lp2;
    }
};