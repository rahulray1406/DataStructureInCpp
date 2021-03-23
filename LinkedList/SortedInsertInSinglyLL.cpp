/*Given a sorted Singly LL need to perform inserction in the LL such that after performing the LL remains in Sorted order*/
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
Node *insertInSortedManner(Node *head,int insertIt)
{
    Node *newNode=new Node(insertIt);
    if(head==NULL)
    {
        return newNode;
    }
    if(head->data>insertIt)
    {
        newNode->next=head;
        return newNode;
    }
    Node *curr=head;
    while (curr->next->data<insertIt && curr->next!=NULL)
    {
        curr=curr->next;
    }
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
    head->next->next->next=new Node(50);
    int Tobeinserted;
    cout<<"Enter the Data to be inserted\n";
    cin>>Tobeinserted;
    head=insertInSortedManner(head,Tobeinserted);
    printList(head);
    return 0;
}