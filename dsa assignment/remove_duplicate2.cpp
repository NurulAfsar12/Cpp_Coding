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

void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

void removeDuplicates(Node* &head){
    if(head == NULL){
        return;
    }
    Node* current = head;
    Node* prev = NULL;

    while(current != NULL){
        Node* temp = head;
        bool duplicate = false;
        while(temp != current) {
            if (temp->val == current->val){
                duplicate = true;
                break;
            }
            temp = temp->next;
        }
        if(duplicate == true){
            prev->next = current->next;
            delete current;
            current = prev->next;
        } 
        else{
            prev = current;
            current = current->next;
        }
    }
}

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int v;
    while(true){
        cin >> v;
        if(v == -1)break;
        insert_at_tail(head,tail,v);
    }
    removeDuplicates(head);
    printList(head);
    return 0;
}
