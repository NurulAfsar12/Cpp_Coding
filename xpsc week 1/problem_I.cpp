#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    int cnt = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(t[i] != s[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}