/*We have to delete the first node for Singly LL*/
#include <bits/stdc++.h>
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
Node *delNode(Node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        Node *temp=head->next;
        delete head;
        return temp;
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
    head= delNode(head);
    printList(head);
    return 0;
}