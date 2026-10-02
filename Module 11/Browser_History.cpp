#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node* next;
    Node* prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, string val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

Node* visit_address(Node* head, string address)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        if(tmp->val == address)
            return tmp;

        tmp = tmp->next;
    }
    return NULL;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    string adr;
    while(true)
    {
        cin >> adr;
        if(adr == "end") break;
        insert_at_tail(head, tail, adr);
    }

    int q;
    cin >> q;

    Node* current = head;
    while(q--)
    {
        string command;
        cin >> command;

        if(command == "visit")
        {
            string addr;
            cin >> addr;

            Node* found = visit_address(head, addr);

            if(found != NULL)
            {
                current = found;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if(command == "next")
        {
            if(current->next != NULL)
            {
                current = current->next;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        else if(command == "prev")
        {
            if(current->prev != NULL)
            {
                current = current->prev;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}