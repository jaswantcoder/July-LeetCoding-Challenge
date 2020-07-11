/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* last(Node* head)
    {
                if(head->next==NULL && head->child==NULL)
                    return head;
        Node *prev=NULL,*r,*x;
        while(head)
        {
            prev=head;
            if(head->child)
            {
                r=head->next;
                x=last(head->child);
                head->next=head->child;
                head->child->prev=head;
                x->next=r;
                if(r)
                {
                    r->prev=x;
                }
                head=x;
            }
            if(head->next)
            {
                head->next->prev=head;
            }
            if(head->next==NULL)
                return head;
            head=head->next;
        }
        return head;
        
        
        
    }
    
    Node* flatten(Node* head) {
        if(!head) return NULL;
        
        Node *r, *x, *root;
        root=head;
        while(head)
        {
            if(head->child)
            {
                    r=head->next;
                x=last(head->child);
                    head->next=head->child;
                head->child->prev=head;
                head->child=NULL;
                x->next=r;
                if(r)
                    r->prev=x;
                    head=x;
            }
            head=head->next;
        }
        head=root;
        Node *prev=NULL;
        while(head)
        {
            head->child=NULL;
            cout<<head->val;
           // head->prev=prev;
            prev=head;
            head=head->next;
}
        
        return root;
        
    }
};
