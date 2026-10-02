#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int mn = v[0];
    for(int i=0; i<n; i++)
    {
        if(v[i] < mn)
        {
            mn = v[i];
        }
        if(mn == v[n-1]){
            return 0;
        }
        else{
            
        }

    }
    cout << mn << endl;
    return 0;
}