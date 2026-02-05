class Solution {
public:
    string multiply(string num1, string num2) {
        
        int n = num1.length();
        int m = num2.length();
        vector<int>result(n+m,0);

        for(int i = n-1 ; i >= 0 ; i--){
            for(int j = m-1 ; j >= 0 ; j--){
                int digit1 = num1[i] - '0';
                int digit2 = num2[j] -'0';


                int mul = digit1 * digit2;
                int sum = mul + result[i+j+1];

                result[i+j+1] = sum%10;
                result[i+j] += sum/10;

            }
        }

        string ans = "";
        for(int x : result){
            if(!(ans.empty() && x == 0)){
                ans.push_back(x + '0');
            }
        }
        return ans.empty() ? "0":ans;
    }
};