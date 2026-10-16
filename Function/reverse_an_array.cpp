#include <bits/stdc++.h>
using namespace std;

void findTarget(int arr[], int sz)
{
    int l = 0, r = sz - 1;
    while(l <= r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
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
     
    findTarget(arr, n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] <<" ";
    }
    
    return 0;
}