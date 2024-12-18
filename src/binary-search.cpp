// https://leetcode.com/problems/binary-search
//
// runtime: 0ms, beats 100%
// space: 31.3mb, beats 29.72%

class Solution {
public:
    int get_mid(int a, int b) {
        int s = b - a + 1;
        return s % 2 == 0 ? a + (s/2 - 1) : a + ((s - 1)/2);
    }

    int search(vector<int>& nums, int target) {
        int r1 = 0;
        int r2 = nums.size() - 1;
        while (r1 != r2) {
            int b = get_mid(r1, r2);
            if (target < nums[b]) {
                r2 = b;
            } else if (target > nums[b]) {
                r1 = b + 1;
            } else {
                return b;
            }
        }
        return nums[r1] == target ? r1 : -1;
    }
};
