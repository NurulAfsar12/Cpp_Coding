#include <bits/stdc++.h>
using namespace std;
class Node 
{
   public:
        int val;
        Node* next;
    Node(int val)
    {
      this->val = val;
      this->next = NULL;
    }
};
 
void printing_linked_list(Node* head){
    
   Node* temp = head;
   int size = 0;
    while(temp != NULL){
        size++;
        cout << temp->val <<endl;
        temp = temp->next;
    }
    cout <<"Size of this Linked list = "<<size << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;

    printing_linked_list(head);
    
    return 0;
}