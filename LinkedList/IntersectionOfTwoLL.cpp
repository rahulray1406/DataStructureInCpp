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
int findIntersectingPoint(Node *head1, Node *head2)
{
    Node *curr1 = head1, *curr2 = head2;
    int Count1 = 0, Count2 = 0;
    for (curr1 = head1; curr1 != NULL; curr1 = curr1->next)
    {
        Count1++;
    }
    for (curr2 = head2; curr2 != NULL; curr2 = curr2->next)
    {
        Count2++;
    }
    int diff = abs(Count1 - Count2);
    if (Count1 > Count2)
    {
        curr1 = head1;
        for (int i = 0; i < diff; i++)
        {
            curr1 = curr1->next;
        }
        curr2 = head2;
        while (curr1 && curr2)
        {
            if (curr1 == curr2)
                return curr1->data;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
    }
    else if (Count2 > Count1)
    {
        curr2 = head2;
        for (int i = 0; i < diff; i++)
        {
            curr2 = curr2->next;
        }
        curr1 = head1;
        while (curr1 && curr2)
        {
            if (curr1 == curr2)
                return curr1->data;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
    }
    else
    {
        curr1 = head1, curr2 = head2;
        while (curr1 && curr2)
        {
            if (curr1 == curr2)
                return curr1->data;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
    }
    return -1;
}
int main()
{
    Node *head1 = new Node(10);
    head1->next = new Node(15);
    head1->next->next = new Node(20);
    head1->next->next->next = new Node(25);
    head1->next->next->next->next = new Node(30);

    Node *head2 = new Node(10);
    head2->next = new Node(25);
    head2->next->next = head1->next;
    head2->next->next->next = new Node(05);
    // head2->next->next->next->next=new Node(01);    //for equal length of LL
    cout << findIntersectingPoint(head1, head2) << "\n";
    return 0;
}