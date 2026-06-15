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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode*temp = head;
         int cnt =0;
         while(temp){
             cnt++;
             temp=temp->next;
         }
         temp = head  ;
         cnt = cnt-n;
          if(cnt == 0){          // delete head
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
         while(cnt-1){
            temp=temp->next;
            cnt--;
         }
         ListNode*temp2=temp->next;
        temp->next=temp->next->next;
        delete temp2;
        return head;
    }
};
