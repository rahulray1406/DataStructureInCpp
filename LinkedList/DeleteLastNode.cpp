/*we have to delete last node/Tail node of singly LL*/
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
Node *delLast(Node *head )
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
       {
           delete head;
           return NULL;
       } 
    else
    {
        Node *curr=head;
        while (curr->next->next!=NULL)
        {
           curr=curr->next;
        }
        delete curr->next;
        curr->next=NULL;
        return head;
    }
}
Node *printList(Node *head)
{
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next; 
    }
    
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head=delLast(head);
    printList(head);
    return 0;
}
