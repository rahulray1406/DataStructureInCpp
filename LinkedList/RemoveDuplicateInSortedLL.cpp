/*Given Sorted LL need to remove duplicate nodes from the LL*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node *removeDuplicate(Node *head)
{
    Node *curr=head;
    while (curr && curr->next)
    {
        if(curr->data!=curr->next->data)
        {
            curr=curr->next;
        }
        else
        {
            Node *temp=curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
        
    }
    return head;
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
    head->next->next->next=new Node(30);
    head->next->next->next->next=new Node(40);
    head->next->next->next->next->next=new Node(40);
    head=removeDuplicate(head);
    printList(head);
    return 0;
}