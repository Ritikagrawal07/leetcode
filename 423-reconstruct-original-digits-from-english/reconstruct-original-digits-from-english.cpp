class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char,int> freq;

for(char c : s){
    freq[c]++;
}



vector<int>count(10,0);

count[0]= freq['z'];
count[2] = freq['w'];
count[4] = freq['u'];
count[6] = freq['x'];
count[8] = freq['g'];


count[3] = freq['r'] - count[4] -count[0] ;
count[7] = freq['s'] - count[6];
count[5] = freq['f'] - count[4];
count[1] = freq['o'] - count[0] - count[2] - count[4];
count[9] = freq['i'] - count[8] - count[6] -count[5];

string ans = "";
for(int i = 0 ; i <= 9 ;i++){
    ans.append(count[i],char('0' + i));
    // .append method parameter one is number of times appending the char and char('0'+i converting char to int 
}

return ans;

    }
};