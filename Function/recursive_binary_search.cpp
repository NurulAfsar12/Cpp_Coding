#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int tar)
{
    int st = arr[0], end = arr.size() - 1;
    while(st <= end)
    {
        int mid =(st+end)/2;
        if(tar < arr[mid])
        {
            end = mid - 1;
        }
        else if(tar > arr[mid])
        {
            st = mid + 1;
        }
        else
            return mid;
    }
    return -1;
}

int recBinarySearch(vector<int> arr, int tar, int st, int end)
{
    if(st <= end)
    {
        int mid =(st+(end-st))/2;
        if(tar < arr[mid])
        {
            return recBinarySearch(arr, tar, st, mid-1);
        }
        else if(tar > arr[mid])
        {
             return recBinarySearch(arr, tar, end, mid+1);
        }
        else
            return mid;
    }
    return -1;
}

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
    int tar;
    cin >> tar;
    cout << binarySearch(v, tar) << endl;
    return 0;
}