#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    
    vector <int> freq(26,0);
    for(char ch : s)
    {
        freq[ch - 'a'] = 1;
    }

    bool occur = false;
    for(int i=0; i<26; i++)
    {
        if(freq[i] == 0)
        {
            occur = true;
            cout << char('a' + i) << endl;
            break;
        }
    }
    if(!occur)
    {
        cout <<"None"<<endl;
    }
    return 0;
}