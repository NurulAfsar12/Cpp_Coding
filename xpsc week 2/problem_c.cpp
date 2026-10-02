#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector <int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        int last = 0;
        for(int i=0; i<k; i++)
        {
            last = v[0] + v[n-1];
            v[n-1] = last;
            v[0] = v[i+1];
            

        }
        for(int i=k; i<n; i++)
        {
            cout << v[i] <<" ";
        }
        cout << endl;
    }
    return 0;
}