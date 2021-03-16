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
int findKey(Node *head, int key)
{
    int pos=1;
    while (head!=NULL)
    {
        if(head->data==key)
            return pos;
        else
        {
            pos++;
            head=head->next;
        } 
    }
    return -1;
    
}
int main()
{   
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    cout<<"Enter the Element to be searched\n";
    int key;
    cin>>key;
    cout<<"Position of "<<key<<" is "<<findKey(head,key)<<endl;
    return 0;
}