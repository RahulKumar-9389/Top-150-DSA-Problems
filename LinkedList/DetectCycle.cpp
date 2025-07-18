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

bool hasCycle(ListNode *head)
{

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    ListNode *head = new ListNode(3);
    ListNode *second = head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = second;

    if (hasCycle(head))
    {
        cout << "Cycle detected!!";
    }
    else
    {
        cout << "No cycle detected!!";
    }

    return 0;
}