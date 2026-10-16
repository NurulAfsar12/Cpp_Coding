#include <bits/stdc++.h>
using namespace std;

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

    int smallest = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << smallest << endl;
    return 0;
}