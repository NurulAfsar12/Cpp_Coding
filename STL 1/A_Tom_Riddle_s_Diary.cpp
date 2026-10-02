#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector <string> s(n);
    map<string, int> freq;
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
    for(int i=0; i<n; i++)
    {
        freq[s[i]]++;
        if(freq[s[i]] == 1)
        {
            cout <<"NO"<<endl;
        }
        else
        {
            cout <<"YES"<<endl;
        }
    }
    
    return 0;
}