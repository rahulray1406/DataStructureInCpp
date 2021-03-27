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
bool detectLoop(Node *head)
{
    Node *fast = head, *slow = head;
    while (fast && fast->next && slow)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    if (detectLoop(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }

    return 0;
}