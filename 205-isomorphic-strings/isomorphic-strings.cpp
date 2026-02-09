class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        unordered_map<char,char>StoTmap;
        unordered_map<char,char>TtoSmap;

        for(int i = 0 ;  i < s.length() ; i++){
            // both maps are empty

            if(!StoTmap[s[i]]  && !TtoSmap[t[i]]){
                // e->a && a_>e mapping in both direction
                StoTmap[s[i]] = t[i];
                TtoSmap[t[i]] = s[i];
            }
            else if(StoTmap[s[i]] != t[i]){
                return false;
            }
            else if(TtoSmap[t[i]] != s[i]){
                return false;
            }
        }return true;
    }
};