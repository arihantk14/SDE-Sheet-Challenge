#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* dummy = new Node<int>(0);
    Node<int>* p1 = dummy;
    Node<int>* c1 = first, *c2 = second;
    while(c1!=NULL && c2!=NULL){
      if (c1->data <= c2->data) {
          p1->next = c1;
          p1 = p1->next;
          c1  = c1->next;
      }
      else{
          p1->next = c2;
          p1 = p1->next;
          c2 = c2->next;
      }
    }
    if(c1!=NULL) p1->next = c1;
    else p1->next = c2;
    return dummy->next;
}
