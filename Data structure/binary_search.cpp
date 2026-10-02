#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int val;
    cin >> val;
    bool found = false;
    for(int i=0; i<n; i++)
    {
        if(v[i] == val)
        {
            found = true;
            break;
        }
    }
    if(found)
    {
        cout <<"Found" <<endl;
    }
    else
    {
        cout <<"Not Found" << endl;
    }
    return 0;
}