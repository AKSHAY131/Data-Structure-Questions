class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while (fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next,
            fast = fast->next->next;
        }
        slow->next = slow->next ->next;
        return slow;
    }
};