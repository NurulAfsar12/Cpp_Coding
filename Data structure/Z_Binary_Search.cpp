#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;

    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    while(q--)
    {
        int x;
        cin >> x;
        bool found = false;
        int l = 0; 
        int r = n-1;
        while(l<=r)
        {
        int mid = (l+r)/2;
        if(v[mid] == x){
            found = true;
            break;
        }
        else if(v[mid] > x)
        {
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    if(found){
    cout <<"found"<<endl;
    }
    else
    {
    cout <<"not found" << endl;
    }
}
    return 0;
}