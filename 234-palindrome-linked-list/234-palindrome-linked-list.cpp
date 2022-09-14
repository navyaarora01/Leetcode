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
    ListNode *reverse(ListNode* head){
        ListNode* next = NULL;
        ListNode* prev = NULL;
        while(head!=NULL){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
            
        }
        return prev;
    }
    ListNode* midofList(ListNode*  head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* mid = midofList(head);
        ListNode* last = reverse(mid);
        ListNode* start =head;
        while(last){
            if(last->val !=start->val){
                return false;
            }
            last=last->next;
            start = start->next;
        }
        return true;
    }
};