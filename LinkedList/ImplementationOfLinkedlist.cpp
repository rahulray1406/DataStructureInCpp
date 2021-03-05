/*We have to simply build a linked list and Traverse it*/
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
//Traversal
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
    // Node *head=new Node(10);   
    // Node *second=new Node(20);
    // Node *third=new Node(30);
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printList(head);
    cout<<endl;
    printList(head);//both the time o/p is going to be same because the head changes are made on another copy of it
    cout<<endl;   
}
