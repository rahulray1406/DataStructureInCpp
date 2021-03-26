/*Reverse a linked list in groups of size k
Recursive Solution*/
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
Node *reverseK(Node *head,int K)
{
    Node *curr=head,*prev=NULL,*next=NULL;
    int count=0;
    while (curr && count<K)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next)
    {
        Node *newNode=reverseK(next,K);
        head->next=newNode;
    }
    return prev;
}
void printList(Node *head)
{   Node *curr=head;
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
    head->next->next->next->next=new Node(50);
    int K;
    cin>>K;
    head=reverseK(head,K);
    printList(head);
    return 0;
}