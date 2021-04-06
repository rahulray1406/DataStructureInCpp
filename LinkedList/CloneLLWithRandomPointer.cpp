/*Clone a linked list using a random pointer*/
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *random;
    Node(int x)
    {
        data=x;
        next=NULL;
        random=NULL;
    }
};
void printList(Node *head)
{
    Node *curr=head;
    while (curr)
    {
        cout<<"Data "<<curr->data<<" Random "<<curr->random->data<<" \n";
        curr=curr->next;
    }
    
}
Node *cloneList(Node *head)
{
    Node *next,*temp;
    for(Node *curr=head;curr!=NULL;)
    {
        next=curr->next;
        curr->next=new Node(curr->data);
        curr->next->next=next;
        curr=next;
    }
    for(Node *curr=head;curr!=NULL;curr=curr->next->next)
    {
        curr->next->random=(curr->next!=NULL)?curr->random->next:NULL;
    }
    Node *original=head,*copy=head->next;
    temp=copy;
    while (original && copy)
    {
       original->next=original->next?original->next->next:original->next;
       copy->next=copy->next?copy->next->next:copy->next;
       original=original->next;
       copy=copy->next;
    }
    return temp;

}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    //connecting Randoms
    head->random=head->next->next;
    head->next->random=head->next->next->next->next;
    head->next->next->random=head;
    head->next->next->next->random=head->next;
    head->next->next->next->next->random=head->next->next->next;
    cout<<"Actual\n";
    printList(head);
    cout<<"Cloned \n";
    head=cloneList(head);
    printList(head);
    return 0;
}