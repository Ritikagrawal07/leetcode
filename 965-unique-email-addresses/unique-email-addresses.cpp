class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>my_set;
           for(string email : emails){
            int pos = email.find('@');
            
            string local = email.substr(0,pos);
            string domain = email.substr(pos+1);

            string cleanLocal = "" ;
           for(char c : local){
            if(c == '+')break;
            if(c == '.')continue;
            cleanLocal += c;
           }

           string finalEmail = cleanLocal + "@" + domain;

           my_set.insert(finalEmail);
           }
           return my_set.size();
        
    }
};