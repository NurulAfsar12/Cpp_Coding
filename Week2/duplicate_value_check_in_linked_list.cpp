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

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(40);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;
    
    Node* temp = head;
    bool duplicate = false;
    while(temp != NULL && temp->next != NULL){
        if(temp->val == temp->next->val){
            duplicate = true;
            break;
        }
        temp = temp->next;
    }
    if(duplicate == true){
        cout <<"YES" << endl;
    }
    else{
        cout <<"NO" <<endl;
    }
    
    return 0;
}