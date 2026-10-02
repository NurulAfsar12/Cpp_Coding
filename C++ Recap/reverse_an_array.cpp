#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int start = 0;
    int end = n - 1;
    while(start < end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
    for(int i=0; i<n; i++)
    {
        cout << v[i] <<" ";
    }
    return 0;
}