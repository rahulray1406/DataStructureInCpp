/*We have Given pointer to Some random Node to be deletec without pointer to the head node*/
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
void deleteRandomNode(Node *RandomNode)
{
    Node *curr=RandomNode->next;
    RandomNode->data=curr->data;
    RandomNode->next=curr->next;
    delete(curr);
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
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    deleteRandomNode(head->next->next);
    printList(head);
    return 0;
}