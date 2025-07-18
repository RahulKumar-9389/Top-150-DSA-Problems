#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    // constructor
    ListNode(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

ListNode *removeNthFromend(ListNode *head, int n)
{

    ListNode *dummy = new ListNode(-1);
    dummy->next = head;

    ListNode *current = dummy;
    ListNode *prev = dummy;

    for (int i = 0; i < n; i++)
    {
        current = current->next;
    }

    while (current->next)
    {
        current = current->next;
        prev = prev->next;
    }

    prev->next = prev->next->next;
    return dummy->next;
}

// Function To Print The List
void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode *res = removeNthFromend(head, 2);
    printList(res);

    return 0;
}