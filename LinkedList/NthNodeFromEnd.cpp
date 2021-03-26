/*Return Nth node from end of sinngly LL*/
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
int NthNode(Node *head,int N)
{
    Node *first=head;
    Node *second=head;
    for(int i=0;i<N;i++)
    {
        first=first->next;
    }
    while (first)
    {   first=first->next;
        second=second->next;
    }
    return (second->data);
}
int main()
{
    Node *head =new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    int N;
    cin>>N;
    cout<<NthNode(head,N)<<endl;
    return 0;
}