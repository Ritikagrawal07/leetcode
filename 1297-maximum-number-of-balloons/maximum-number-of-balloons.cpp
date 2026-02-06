class Solution {
public:
    int maxNumberOfBalloons(string text) {
      

        
           unordered_map<char,int>freq;
           for(auto &it : text){
            freq[it]++;
           }
           int count = 0 ;
           
            count = min({
                freq['b'],
                freq['a'],
                freq['l']/2,
                freq['o']/2,
                freq['n']

            });
           return count;

    }
};