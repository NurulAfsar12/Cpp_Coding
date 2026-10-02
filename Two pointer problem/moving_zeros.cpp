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

    int i=0;
    for(int j=0; j<n; j++)
    {
        if(v[j] != 0)
        {
            swap(v[j], v[i]);
            i++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << v[i] <<" ";
    }
    return 0;
}