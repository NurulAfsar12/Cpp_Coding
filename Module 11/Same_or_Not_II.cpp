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
int stack_remove(Node* &head, Node* &tail)
{
    int val = tail->val;

    Node* deleteNode = tail;

    if(head == tail)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
        tail = tail->prev;
        tail->next = NULL;
    }

    delete deleteNode;
    return val;
}

int queue_remove(Node* &head, Node* &tail)
{
    int val = head->val;

    Node* deleteNode = head;

    if(head == tail)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
        head = head->next;
        head->prev = NULL;
    }

    delete deleteNode;
    return val;
}

int main()
{
    int n,m;
    cin >> n >> m;
    Node* stackhead = NULL;
    Node* stacktail = NULL;

    Node* queuehead = NULL;
    Node* queuetail = NULL;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        insert_at_tail(stackhead,stacktail,x);
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        insert_at_tail(queuehead,queuetail,x);
    }

    if(n != m)
    {
        cout<<"NO";
        return 0;
    }

    bool same = true;
    while(stackhead != NULL)
    {
        int s = stack_remove(stackhead,stacktail);
        int q = queue_remove(queuehead,queuetail);

        if(s != q)
        {
            same = false;
            break;
        }
    }

    if(same) cout<<"YES";
    else cout<<"NO";

    return 0;
}