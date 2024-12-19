// https://leetcode.com/problems/reverse-linked-list/
// runtime: beats 100%, 3ms
// recursive implementation, worked first time!!!

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        return swap(head, nullptr);
    }

    ListNode* swap(ListNode* c, ListNode* p) {
        if (c == nullptr) return p;
        ListNode *tmp = c->next;
        c->next = p;
        p = c;
        return swap(tmp, p);
    }

};
