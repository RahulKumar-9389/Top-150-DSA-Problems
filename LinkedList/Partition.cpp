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

ListNode *partition(ListNode *head, int x)
{
    if (!head || !head->next)
    {
        return head;
    }

    ListNode *dummy1 = new ListNode(-1); // List for nodes < x
    ListNode *curr1 = dummy1;

    ListNode *dummy2 = new ListNode(-1); // List for nodes >= x
    ListNode *curr2 = dummy2;

    ListNode *current = head;
    while (current)
    {
        if (current->val < x)
        {
            curr1->next = current;
            curr1 = curr1->next;
        }
        else
        {
            curr2->next = current;
            curr2 = curr2->next;
        }
        current = current->next;
    }

    curr2->next = nullptr;
    curr1->next = dummy2->next;

    return dummy1->next;
}

// Prints a linked list
void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(4);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(2);

    ListNode *res = partition(head, 2);

    cout << "Partitioned List: ";
    printList(res);

    return 0;
}
