#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int> freq(26,0);
    for(auto c:s)
    {
        freq[c-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(freq[i] > 0)
        {
            cout << char('a' + i) <<" -> " <<freq[i]<<endl;
        }
    }
    return 0;
}
