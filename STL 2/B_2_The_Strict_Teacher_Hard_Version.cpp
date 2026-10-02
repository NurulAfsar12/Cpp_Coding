#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        int m,q;
        cin >> n >>m >>q;
        vector <long long> v(m);
        for(int i=0; i<m; i++)
        {
            cin >> v[i];
        }
        while(q--)
        {
            long long x;
            cin >> x;
            if(x <v[0])
            {
                cout << v[0] - 1 << endl;
            }
            else if(x > v[m-1])
            {
                cout << n - v[m-1] << endl;
            }
            else
            {
                long long l = 0, r = 0;
                for(int i=0; i<m; i++)
                {
                    if(v[i] < x)
                    {
                        l = v[i];
                    }
                    if(v[i] > x)
                    {
                        r = v[i];
                        break;
                    }
                }
                cout << (r-l)/2 << endl;
            }
        }
    }
    return 0;
}