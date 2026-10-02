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
        vector <int> a(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        bool neat = false;
        for(int i=0; i<n; i++)
        {
            if(a[i] < a[i+1])
            {
                neat = true;
            }
            else if(a[i] > 1 && a[i] >= a[i+1])
            {
                while(a[i] > 1)
                {
                    a[i]--;
                    a[i+1]++;
                }
                neat = true;
            }
            else
                neat = false;
                break;
            
        }
        if(neat)
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }
    return 0;
}