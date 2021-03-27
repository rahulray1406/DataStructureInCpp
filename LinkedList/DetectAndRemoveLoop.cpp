#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node *detectAndRemove(Node *head)
{
    Node *fast=head,*slow=head;
    while (fast && fast->next && slow)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
            break;
    }
    if(fast!=slow) return head;
    slow=head;
    while (slow->next!=fast->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    fast->next=NULL;
    return head;
}
void printList(Node *head)
{
    Node *curr=head;
    while (curr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head->next;
    head=detectAndRemove(head);
    printList(head);
    return 0;
}