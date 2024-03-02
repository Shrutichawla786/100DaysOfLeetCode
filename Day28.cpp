Q.23. Merge k Sorted Lists
link-->https://leetcode.com/problems/merge-k-sorted-lists/description/
code--> ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        int n= lists.size();
        for(int i=0;i<n;i++){
            ListNode * temp = lists[i];
            while(temp!=NULL){
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(v.begin() , v.end());
        ListNode * dummyhead= new ListNode(-1);
        ListNode * dummynode= dummyhead;
        int i=0;
        while(i<v.size()){
            ListNode *newnode=new ListNode(v[i]);
            i++;
            dummynode->next=newnode;
            dummynode=newnode;
        }
        return dummyhead->next;
    }
