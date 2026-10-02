#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        int k = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i] != i+1)
            {
                k = max(k,v[i]);
            }
        }
        if(k!=0)
        {
            k++;
        }
        cout <<k<<endl;
    }
    return 0;
}