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
        int n;
        cin >> n;

        string a,b;
        cin >> a >> b;

        int a1 = 0,b1= 0;
        int a_odd = 0, b_odd = 0;

        for(int i=0; i<n; i++)
        {
            if(a[i] == '1')
            {
                a1++;
                if(i%2 == 0)
                {
                    a_odd++;
                }
            }
            if(b[i] == '1')
            {
                b1++;
                if(i%2 == 0)
                {
                    b_odd++;
                }
            }
        }
            if(a1 != b1 || a_odd != b_odd)
            {
                cout <<"NO"<<endl;
            }
            else
                cout <<"YES" << endl;
        
         
    }
    return 0;
}