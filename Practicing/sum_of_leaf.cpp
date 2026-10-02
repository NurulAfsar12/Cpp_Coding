#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int sum_left_leaf(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    int sum = 0;
    while (!q.empty())
    {
        Node *leaf = q.front();
        q.pop();

        if (leaf->left == NULL && leaf->right == NULL)
            sum += leaf->val;

        if (leaf->left)
            q.push(leaf->left);
        if (leaf->right)
            q.push(leaf->right);
    }
    return sum;
}
int main()
{
    Node *root = input_tree();
    int ans = sum_left_leaf(root);
    cout << ans << endl;
    return 0;
}