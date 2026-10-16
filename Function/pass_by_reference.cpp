#include <bits/stdc++.h>
using namespace std;

void changeArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i]; 
    }
    changeArray(arr, 5);
    for(int i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}