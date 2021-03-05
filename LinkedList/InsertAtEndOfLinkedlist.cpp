/*We have to insert at the end of linked list*/
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
Node *insertAtEnd(Node *head, int x)
{
    Node *newNode = new Node(x);
    if (head == NULL)
        return newNode;
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = insertAtEnd(head, 50);
    head = insertAtEnd(head, 60);
    head = insertAtEnd(head, 70);
    printList(head);
    return 0;
}