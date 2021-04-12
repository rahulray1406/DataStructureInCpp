/*Given two sorted LL need to merger both the list into one without using extra space*/
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
Node *mergeTwoList(Node *head,Node *head2)
{   
    if(head==NULL) return head2;
    if(head2==NULL) return head;
    Node *curr=NULL,*tail=NULL;
    if(head->data<=head2->data)
    {
        curr=tail=head;
        head=head->next;
    }
    else
    {
        curr=tail=head2;
        head2=head2->next;
    }
    while (head!=NULL && head2!=NULL)
    {
        if(head->data<=head2->data)
        {
            tail->next=head;
            tail=head;
            head=head->next;
        }
        else
        {
            tail->next=head2;
            tail=head2;
            head2=head2->next;
        }
    }
    if(head==NULL)
    {
        tail->next=head2;
    }
    else
    {
        tail->next=head;
    }
    return curr;    
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
    head->next=new Node(15);
    head->next->next=new Node(20);
    head->next->next->next=new Node(25);
    head->next->next->next->next=new Node(30);

    Node *head2=new Node(5);
    head2->next=new Node(16);
    head2->next->next=new Node(22);
    head2->next->next->next=new Node(35);
    head=mergeTwoList(head,head2);
    printList(head);

}