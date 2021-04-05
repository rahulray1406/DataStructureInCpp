/*Given a singly linked list, the task is to segregate or separate the even and odd nodes of the linked list.*/
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
Node *segregateList(Node *head)
{
    Node *EvenStart=NULL,*EvenEnd=NULL,*OddStart=NULL,*OddEnd=NULL;
    for(Node *curr=head;curr!=NULL;curr=curr->next)
    {
        int z=curr->data;
        if(z%2==0)
        {
            if(EvenStart==NULL)
            {
                EvenStart=curr;
                EvenEnd=EvenStart;
            }
            else
            {
                EvenEnd->next=curr;
                EvenEnd=EvenEnd->next;
            }
        }
        else
        {
            if(OddStart==NULL)
            {
                OddStart=curr;
                OddEnd=OddStart;
            }
            else
            {
                OddEnd->next=curr;
                OddEnd=OddEnd->next;
            }
            
        }
        
    }
    if(OddStart==NULL || EvenStart==NULL) return head;
    EvenEnd->next=OddStart;
    OddEnd->next=NULL;
    return EvenStart;
}
void printList(Node *head)
{
    Node *Curr=head;
    while (Curr)
    {
        cout<<Curr->data<<" ";
        Curr=Curr->next;
    }
    
}
int main()
{
    Node *head=new Node(17);
    head->next=new Node(20);
    head->next->next=new Node(15);
    head->next->next->next=new Node(21);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(40);
    head=segregateList(head);
    printList(head);
    return 0;
}