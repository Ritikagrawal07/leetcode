class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
      
        unordered_set<int> st;
        long long windowSum = 0, maxSum = 0;
        int n = nums.size();

        int i = 0, j = 0;

        while (j < n) {

            // 🔴 STEP 1: remove duplicate if present
            // this loop will only run when duplicate present as .count function return only 0 or 1 in set like true or false
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
            // in first iteration 1,5,4 inserted and windiw size = k now its sum stored in maxsum nd window slided so 1 deleted and windowsum decremented with the nums[i]
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
// Input: nums = [1,5,4,2,9,9,9], k = 3
// Output: 15