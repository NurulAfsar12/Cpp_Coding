#include <bits/stdc++.h>
using namespace std;

int findTarget(int arr[], int sz, int t)
{
    for(int i=0; i<sz; i++)
    {
        if(arr[i] == t)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int idx = findTarget(arr, n, target);
    cout<<idx<<endl;
    
    return 0;
}