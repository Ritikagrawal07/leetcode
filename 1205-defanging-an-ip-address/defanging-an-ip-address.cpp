class Solution {
public:
    string defangIPaddr(string address) {
        
        string ans = "";
        for(char addr : address){
            if(addr == '.'){
                ans += "[.]";
            }else{
                ans += addr;
            };
        }return ans;
    }
};