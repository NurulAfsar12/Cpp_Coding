#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
     
    while(t--)
    {
        string s;
        cin >> s;
        string ans = "";
        for(int i=0; i<s.size(); i+=2)
        {
            char ch = s[i];
            int digit = s[i+1] - '0';

            for(int j=0; j<digit; j++)
            {
                ans += ch;
            }
        }
        cout <<ans <<endl;
    }
    return 0;
}