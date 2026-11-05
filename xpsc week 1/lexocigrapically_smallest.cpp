#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    for(char ch = 'a'; ch<= 'z'; ch++)
    {
        bool found = false;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == ch)
            {
                found = true;
                break;
            }
        }
        if(!found)
        {
            cout << ch << endl;
            return 0;
        }
    }
    cout << "None"<<endl;
    return 0;
}