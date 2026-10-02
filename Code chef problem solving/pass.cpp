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
        int n = 5;
        vector <int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        int cnt1 = 0,cnt2 = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i] >= 60)
            {
                cnt1++;
            }
            if(v[i] >= 30 )
            {
                cnt2++;
            }
        }
        if(cnt1 >= 2 && cnt2 >= 4)
        {
            cout <<"PASS"<<endl;
        }
        else
        {
            cout <<"FAIL"<<endl;
        }

    }
    return 0;
}