#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int get_size(Node* head)
{
    int cnt = 0;
    Node* tmp = head;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
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

void insert_at_any_pos(Node* head, int idx, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
}

void print_left(Node* head)
{
    cout<<"L -> ";
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void print_right(Node* tail)
{
    cout<<"R -> ";
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}

int main()
{
    int q;
    cin>>q;

    Node* head = NULL;
    Node* tail = NULL;

    while(q--)
    {
        int x,v;
        cin>>x>>v;

        int sz = get_size(head);

        if(x > sz)
        {
            cout<<"Invalid"<<endl;
            continue;
        }

        if(x == 0)
        {
            insert_at_head(head,tail,v);
        }
        else if(x == sz)
        {
            insert_at_tail(head,tail,v);
        }
        else
        {
            insert_at_any_pos(head,x,v);
        }

        print_left(head);
        print_right(tail);
    }

    return 0;
}