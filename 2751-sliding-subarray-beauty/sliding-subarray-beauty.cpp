class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
          vector<int> ans;
        unordered_map<int, int> mp;

        int i = 0, j = 0;
        int n = nums.size();

        while (j < n) {

            // 🟢 STEP 1: add element to window
            mp[nums[j]]++;

            // 🔵 STEP 2: grow window
            if (j - i + 1 < k) {
                j++;
            }

            // 🟡 STEP 3: window size == k
            else if (j - i + 1 == k) {

                // compute beauty
                int cnt = 0;
                int beauty = 0;

                for (int val = -50; val < 0; val++) {
                    if (mp.count(val)) {
                        cnt += mp[val];
                        if (cnt >= x) {
                            beauty = val;
                            break;
                        }
                    }
                }

                ans.push_back(beauty);

                // 🔴 STEP 4: slide window
                mp[nums[i]]--;
                if (mp[nums[i]] == 0)
                    mp.erase(nums[i]);

                i++;
                j++;
            }
        }
     return ans;
        
    }
};
