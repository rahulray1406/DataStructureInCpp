/*for a given singly LL we have to insert data into a particular position */
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
Node *insertAtPos(Node *head,int pos,int val)
{
    Node *newNode=new Node(val);
    if(pos==1)
    {
        newNode->next=head;
        return newNode;
    }
    Node *curr=head;
    for(int i=1;i<=pos-2 && curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
        return head;
    newNode->next=curr->next;
    curr->next=newNode;
    return head;
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
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(40);
    cout<<"Enter the pos\n";
    int pos;
    cin>>pos;
    cout<<"Enter the Data \n";
    int val;
    cin>>val;
    head=insertAtPos(head,pos,val);
    printList(head);
}