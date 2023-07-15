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
int length(LinkedListNode<int>* head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}
LinkedListNode<int> *reverse(LinkedListNode<int>* head){
    LinkedListNode<int> * prev = NULL, *curr = head, *nxt = head->next;
    while(nxt){
        curr->next = prev;
        prev = curr;
        curr = nxt;
        nxt = nxt->next;
    }
    curr->next = prev;
    return curr;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL) return true;
    int mid = (length(head)/2), cnt = mid;
    LinkedListNode<int>* ptr = head;
    while(mid--){
        ptr = ptr->next;
    }
    ptr = reverse(ptr);
    LinkedListNode<int> *p1 = head;
    while(cnt--){
        if(p1->data!=ptr->data) return false;
        p1 = p1->next;
        ptr = ptr->next;
    }
    return true;
}
