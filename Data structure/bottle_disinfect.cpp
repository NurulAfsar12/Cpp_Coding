#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,val;
    cin >> n >> val;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(val >= arr[i]){
        val = val - arr[i];
        cnt++;
        }
        else
        break;

    }
    cout << cnt << endl;
    return 0;
}