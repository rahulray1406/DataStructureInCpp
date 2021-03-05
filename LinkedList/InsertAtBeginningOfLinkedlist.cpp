/*We have to insert the given values at the beginning of linked list*/
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
Node *insertAtBeginning(Node *head,int x)
{
    Node *newNode=new Node(x);
    newNode->next=head;
    return newNode;
}
void printList(Node *head)
{
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}
int main()
{
    Node *head=new Node(40);
    head->next=new Node(50);
    head=insertAtBeginning(head,30);
    head=insertAtBeginning(head,20);
    head=insertAtBeginning(head,10);
    printList(head);
    cout<<"\n";
    return 0;
}