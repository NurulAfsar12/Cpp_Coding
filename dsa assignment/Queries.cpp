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

void insert_at_head(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
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

void delete_at_any_pos(Node* &head, Node* &tail ,int idx)
{
    if(head == NULL){
    return;
    }
    if(idx == 0){
        Node* delhead = head;
        head = head->next;
        delete delhead;
        if(head == NULL)
        tail = NULL;
        return;
    }

    Node* tmp = head;
    for(int i=0; i<idx - 1; i++){
        if(tmp->next == NULL){
         return;
         } 
        tmp = tmp->next;
    }

    if(tmp->next == NULL){
    return;
    }
    else{
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    if(deleteNode == tail){
    tail = tmp;
    }
    delete deleteNode;
    }
}

void printing_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    while(q--){
        int x,v;
        cin >> x >> v;
        if(x == 0){
            insert_at_head(head,tail,v);
        }
        else if(x == 1){
            insert_at_tail(head,tail,v);
        }
        else if(x == 2){
            delete_at_any_pos(head,tail,v);
        }
        printing_linked_list(head);
    }
}
