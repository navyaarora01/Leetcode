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
    int sizeLL(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp){
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
      
        if(head == NULL){
            return head;
        }  
        int n = sizeLL(head);
        int loop = k%n;
        loop = n-loop;
        if(n == 1 || loop == n){
            return head;
        }
        int i = 0;
        ListNode* temp = head;
        ListNode* newHead;
        
        while(temp!=NULL){
            i++;
            if(i==loop){
                newHead = temp->next;
                temp->next = NULL;
                break;
            }
            temp = temp->next;
        }
        temp = newHead;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = head;
        return newHead;
    }
};