class Solution {
public:
    
    bool isVowel(char w){
        {
            if(w == 'a' || w == 'e' || w == 'i'
            ||w == 'o' || w == 'u' || w == 'A' || 
            w == 'E' || w == 'O' || w == 'U' || w == 'I'){
                return true;
            }
            
        }return false;
        }
    
    string reverseVowels(string s) {
        int n= s.length();
        int left = 0;
        int right = n-1;
       
       while(left < right){

        while(left < right && !isVowel(s[left]))left++;
        while(left < right && !isVowel(s[right]))right--;

        swap(s[left++],s[right--]);
       

           
         }
    
        return s;
    
    }
};