// Last updated: 4/13/2026, 3:38:56 PM
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
        Node* anshead=NULL,*temp=head,*prev=NULL,*temp1=NULL;
        map<Node*,Node*>mp;
        while(temp!=NULL){
            temp1=new Node(temp->val);
            if(prev==NULL){
                anshead=temp1;
                prev=temp1;
            }
            else {prev->next=temp1;prev=temp1;}
            mp[temp]=prev;
            temp=temp->next;
        }
        temp=head;
        prev=anshead;
        while(temp!=NULL){
            if(temp->random!=NULL){
                prev->random=mp[temp->random];
            }
            temp=temp->next;
            prev=prev->next;
        }
        return anshead;
    }
};