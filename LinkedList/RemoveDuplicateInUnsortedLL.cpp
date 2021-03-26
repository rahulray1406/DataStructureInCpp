/*Given Unsorted LL need to remove duplicate node from the LL */
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
void printList(Node *head)
{   Node *curr=head;
    while (curr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
void removeDuplicate(Node *head)
{
    unordered_set<int> set;
    Node *curr=head;
    Node *prev=NULL;
    while (curr)
    {
        if(set.find(curr->data)!=set.end())
        {
            prev->next=curr->next;
            delete(curr);
        }
        else
        {
            set.insert(curr->data);
            prev=curr;
        }
        curr=prev->next;
    }
    printList(head);
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(50);
    head->next->next=new Node(20);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(20);
    removeDuplicate(head);
    //printList(head);
    return 0;
}