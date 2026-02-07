class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
      
        unordered_set<int> st;
        long long windowSum = 0, maxSum = 0;
        int n = nums.size();

        int i = 0, j = 0;

        while (j < n) {

            // 🔴 STEP 1: remove duplicate if present
            while (st.count(nums[j])) {
                st.erase(nums[i]);
                windowSum -= nums[i];
                i++;
            }

        
            // 🟢 STEP 2: add current element
            st.insert(nums[j]);
            windowSum += nums[j];

            // 🔵 STEP 3: normal window logic
            if (j - i + 1 < k) {
                j++;
            }
            else if (j - i + 1 == k) {
                maxSum = max(maxSum, windowSum);

                // slide window
                st.erase(nums[i]);
                windowSum -= nums[i];
                i++;
                j++;
            }
        }
        return maxSum;
    }
};