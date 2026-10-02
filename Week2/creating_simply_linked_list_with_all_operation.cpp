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

void insertion_at_head(Node* &head, int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void insertion_at_any_pos(Node* &head, int idx, int val)
{
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i=0; i<idx-1; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    
}

void insertion_at_tail(Node* &head , Node* &tail , int val)
{
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void printing_linked_list(Node* head){
    
   Node* temp = head;
   int cnt = 0;
    while(temp != NULL){
        cnt++;
        cout << temp->val <<endl;
        temp = temp->next;
    }
    cout <<"count = "<<cnt << endl;
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

    insertion_at_head(head,100);
    insertion_at_tail(head,tail,500);
    insertion_at_any_pos(head,3,300);


    printing_linked_list(head);
    return 0;
}