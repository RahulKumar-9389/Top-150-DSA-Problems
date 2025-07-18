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

ListNode *removeDuplicate(ListNode *head){
    if(!head || !head->next){
        return head;
    }

    ListNode *prev = head;
    ListNode *current = head->next;

    while(current->next){
        if(current->val != prev->val){
            prev->next = current;
            prev = current;
        }
        current = current->next;
    }

    return head;
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
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode *res = removeDuplicate(head);
    printList(res);
    return 0;
}