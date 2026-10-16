#include <bits/stdc++.h>
using namespace std;

int Sum(int arr[], int sz)
{
    int sum = 0;
    for(int i=0; i<sz; i++)
    {
        sum += arr[i];
        
    }
    return sum;
}

int Product(int arr[], int sz)
{
    int product = 1;
    for(int i=0; i<sz; i++)
    {
        product *= arr[i];
    }
    return product;
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
    cout << Sum(arr, n) << endl;
    cout << Product(arr, n) << endl;
    
    return 0;
}