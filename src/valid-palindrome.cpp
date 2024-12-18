// https://leetcode.com/problems/valid-palindrome/
// runtime: 0ms, beats 100%
// space: 9.79MB, beats 36.47%

#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        int p1 = 0;
        int p2 = s.size() - 1;
        while (p1 < p2) {
            char& c1 = s.at(p1);
            char& c2 = s.at(p2);
            if (!std::isalnum(c1)){
                p1++;
                continue;
            }
            if (!std::isalnum(c2)) {
                p2--;
                continue;
            }
            if (std::tolower(c1) == std::tolower(c2)) {
                p1++;
                p2--;
            } else {
                return false;
            }
        }
        return true;

    }
};
