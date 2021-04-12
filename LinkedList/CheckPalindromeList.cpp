/*Given linked list we need to check if the given LL is Palindrome or not*/
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};
ListNode *reverseList(ListNode *node)
{
    ListNode *curr = node, *prev = NULL, *next = NULL;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    node = prev;
    return node;
}
bool isPalindrome(ListNode *head)
{
    if (head == NULL)
        return true;
    ListNode *slow = head, *fast = head;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *rev = reverseList(slow->next);
    ListNode *curr = head;
    while (rev)
    {
        if (curr->val != rev->val)
            return false;
        curr = curr->next;
        rev = rev->next;
    }
    return true;
}
int main()
{
    ListNode *head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(25);
    head->next->next->next = new ListNode(20);
    head->next->next->next->next = new ListNode(10);
    if (isPalindrome(head))
    {
        cout << "YES \n";
    }
    else
    {
        cout << "NO \n";
    }
    return 0;
}