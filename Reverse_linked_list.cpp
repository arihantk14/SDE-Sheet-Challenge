#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL || head->next ==NULL) return head;
    LinkedListNode<int>* prev = NULL, *curr = head, *ptr = head->next;
    while(ptr){
        curr->next = prev;
        prev = curr;
        curr = ptr;
        ptr = ptr->next;
    }
    curr->next = prev;
    return curr;
}
