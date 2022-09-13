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
    int lengthOfLL(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }
    
    ListNode* reverseKLinkedList(ListNode* head , int k , int length){
        if(length<k){
            return head;
        }
        
        int count = 0;
        ListNode* next = NULL ;
        ListNode* prev = NULL;
        ListNode* curr =  head;
        while(curr!=NULL && count<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(next!=NULL){
            head->next = reverseKLinkedList( next, k , length-k);
        }
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int length = lengthOfLL(head);
        head = reverseKLinkedList(head , k , length);
        return head;
    }
};