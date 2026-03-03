class Solution {
public:
    char findKthBit(int n, int k) {
        bool flip = false;

        while (k > 1) {
            int mid = 1;
            while (mid < k) mid <<= 1;

            if (k == mid)
                return flip ? '0' : '1';

            k = mid - k;
            flip = !flip;
        }

        return flip ? '1' : '0';
    }
};