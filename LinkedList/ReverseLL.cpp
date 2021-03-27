#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *reverseList(Node *head)
{
    Node *curr = head, *prev = NULL, *next = NULL;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
void printList(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(100);
    head->next->next = new Node(1000);
    head->next->next->next = new Node(10000);
    head = reverseList(head);
    printList(head);
    return 0;
}