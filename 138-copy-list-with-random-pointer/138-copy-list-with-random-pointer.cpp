/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        //step 1 -- make a copy of node and attach to it next
        Node* curr = head;
        Node* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            Node* copy = new Node(curr->val);
            curr->next = copy;
            copy->next = next;
            curr = next;           //curr  = curr->next;
        }
        
        
        //step -2 copy its random nodes
        curr = head;
        while(curr!=NULL){
            if(curr->random!=NULL){
                curr->next->random = curr->random->next;       // important
                
            }
            curr= curr->next->next;
        }
          //step 3 restore the originallist and extract the copy list
        curr = head;
        Node* newHead = new Node(0);
        Node* copy = NULL;
        Node* temp = newHead;
        while(curr!=NULL){
            next  = curr->next->next;
            
            //extract the copy
            copy = curr->next;
            temp->next=  copy;
            temp = copy;
            
            //restore the original
            curr->next = next;
            curr = next;
            
        }
        return newHead->next;
        
        
    }
};