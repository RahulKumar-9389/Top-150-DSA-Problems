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

ListNode *rotateRight(ListNode *head, int k){

    if(!head || k == 0 || !head->next){
        return head;
    }

    // Calculate the length of the list
    int length = 1;
    ListNode *tail = head;

    while(tail->next){
        length += 1;
        tail = tail->next;
    }

    // if k > length 
    k = k % length;
    int n = length - k;


    ListNode *temp = head;

    for(int i = 1; i<n; i++){
        temp = temp->next;
    }

    ListNode *newHead = temp->next;
    temp->next = nullptr;
    tail->next = head;

    return newHead;
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

  ListNode *res = rotateRight(head, 2);
  printList(res);

    return 0;
}