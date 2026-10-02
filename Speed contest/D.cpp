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
        int a,b;
        cin >> a >> b;

        int result =  0;
        bool found = false;
        if(a==b)
        {
            found = true;
        }
        while(a!=b)
        {
            if(a<b)
            {
                result = a*2;
                a = result;
                if(a==b)
                {
                    found = true;
                    break;
                }
                else if(a>b)
                {
                    break;
                }
            }
            else
            {
                result = b*2;
                b = result;
                if(a==b)
                {
                    found = true;
                    break;
                }
                else if(b>a)
                {
                    break;
                }
            }
        }
        if(found)
        {
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
    return 0;
}