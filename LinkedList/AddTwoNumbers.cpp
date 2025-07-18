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


// Add Two Number Function
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2){


    ListNode *dummy = new ListNode(-1);
    ListNode *current = dummy;

    int carry = 0;

    while(l1 || l2){

        int sum = 0;

        if(l1){
            sum += l1->val;
            l1 = l1->next;
        }

        if(l2){
            sum += l2->val;
            l2 = l2->next;
        }

        sum += carry;
        carry = sum / 10;

        ListNode *temp = new ListNode(sum % 10);
        current->next = temp;
        current = current->next;
    }

    if(carry){
        ListNode *carryNode = new ListNode(carry);
        current->next = carryNode;
        current = current->next;
    }

    return dummy->next;
}


// Function To Print The List
void printList(ListNode *head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
}

int main()
{
    // List 1
    ListNode *head1 = new ListNode(2);
    head1->next = new ListNode(4);
    head1->next->next = new ListNode(3);


    // List 2
    ListNode *head2 = new ListNode(5);
    head2->next = new ListNode(6);
    head2->next->next = new ListNode(4);


    ListNode *res = addTwoNumbers(head1, head2);
    printList(res);
    return 0;
}