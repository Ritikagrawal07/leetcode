class Solution {
public:
    string largestOddNumber(string num) {
        
        int n = num.length()-1;
        while(n>=0){

            int digit = num[n] - '0';
            if(digit % 2 == 1){
                return num.substr(0,n+1);
                // .substr(pos,length) methos uses this format i have to rember here n+1 is length not index and 0 is pos
            }
            n--;
        }return "";

    }
};