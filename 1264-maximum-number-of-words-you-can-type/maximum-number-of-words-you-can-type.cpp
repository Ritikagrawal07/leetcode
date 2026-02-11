class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
       

        unordered_set<char>broken;
        for(int j = 0 ; j < brokenLetters.length();j++){
            broken.insert(brokenLetters[j]);
        }

        int n = text.length();

        
        int count = 0;
        bool canType = true;
        for(int i = 0 ; i < n ; i++){

            if(broken.count(text[i])){
                    canType = false;
                }
            
            // increase the count when there is a space beause for the previous word will be counted and if its last word there is not space  so checking the condition if it is last word than also incresing the count
            if(i == text.length()-1 || text[i] == ' '){
            if(canType){
                count++;
            }
                canType= true;
            }
           
                
            
          
        }
        return count;

    }
};