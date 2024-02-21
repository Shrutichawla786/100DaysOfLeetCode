Q.237. Delete Node in a Linked List
link-->https://leetcode.com/problems/delete-node-in-a-linked-list/description/
code->void deleteNode(ListNode* node) {
        node->val= node->next->val;
        node->next= node->next->next;
    }
