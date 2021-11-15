/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        auto det=head;
        int up=0;
        auto det1=l1,det2=l2;
        while(det1!=nullptr||det2!=nullptr)
        {
            if(det1==nullptr&&det2==nullptr) break;
            det->val=(det1->val+det2->val+up)%10;
            det->next=new ListNode(0);
            up=(det1->val+det2->val)/10;
            det=det->next,det1=det1->next,det2=det2->next;
        }
        return head;
    }
};
// @lc code=end

