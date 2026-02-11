class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int left = 0 ;
         int right = 0 ;
        
        while(right <= n){

            if(s[right] == ' ' || right == n){
               
                int l = left;
                int r = right -1;

                while(l < r ){
                swap(s[l++],s[r--]);
            }
            left = right +1;
            
            
            }
            right++;
        }
        return s;
    }
};