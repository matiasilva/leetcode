// https://leetcode.com/problems/valid-parentheses/
// runtime: beats 100%, 0ms
//
//

#include <stack>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> ps;
        std::map<char, char> m = {{'}', '{'},
                                    {']', '['},
                                    {')', '('}};
        for (auto c : s) {
            if (c == '{' || c == '[' || c == '('){
                ps.push(c);
            } else {
                if (ps.empty()) return false;
                char cp = ps.top();
                if (cp != m[c]) return false;
                ps.pop();
            }
        }
        return ps.empty();
    }
};
