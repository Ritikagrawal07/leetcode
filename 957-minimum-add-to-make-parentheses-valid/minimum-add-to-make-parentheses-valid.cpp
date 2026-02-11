class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0 ; //no of close needed
        int close = 0 ; // no of open needed

       for(auto c : s){

        if(c == '('){
            open++;
        }else{
            if(open > 0){
                open--;
            }else{
                close++;
            }
        }
       
       } 
        return open + close;
    }
};