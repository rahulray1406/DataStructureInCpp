//Pairwise swap nodes of linked list
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
Node *pairwiseSwap(Node *head)
{
    Node *curr=head;
    while (curr && curr->next)
    {
        swap(curr->data,curr->next->data);
        curr=curr->next->next;
    }
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
    head->next=new Node(12);
    head->next->next=new Node(20);
    head->next->next->next=new Node(22);
    head->next->next->next->next=new Node(30);
    head=pairwiseSwap(head);
    printList(head);
    return 0;
}