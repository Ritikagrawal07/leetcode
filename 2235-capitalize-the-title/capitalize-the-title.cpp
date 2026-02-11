class Solution {
public:
    string capitalizeTitle(string title) {
        
        int n = title.length();
        for(int i = 0 ; i < n ; i++){
          title[i] = tolower(title[i]);
        }
         int i = 0;
        while(i < n){
          int start = i ;

          //calculating the wordlength
          int wordlength = 0 ;

          while(i < n && title[i] != ' '){
            i++;
          }

          wordlength = i - start;
          if(wordlength > 2){
            title[start] = toupper(title[start]);
          }

        //   skip space 
        i++;
        }return title;
    }
};