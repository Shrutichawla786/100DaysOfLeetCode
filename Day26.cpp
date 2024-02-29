Q.206. Reverse Linked List
link-->https://leetcode.com/problems/reverse-linked-list/description/
code--> ListNode* reverseList(ListNode* head) {
        
        ListNode* curr= head;
        ListNode * prev = NULL;
        while(curr!=NULL){
            ListNode * nexti= curr->next;
            curr->next = prev;
            prev = curr;
            curr= nexti;
        }
        return prev;
    }
