#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] > 1) {
            cout << ceil(double(arr[i])/7) << endl;
        }
        else {
            cout <<"0"<<endl;
        }
    }
    return 0;
}