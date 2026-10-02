#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int cnt[26] = {0};
    for(int i=0; i<s.size(); i++){
        cnt[s[i] - 97]++;
    }
    for(int i = 0; i<s.size(); i++){
         if(cnt[s[i] - 97] == 1){
            cout << s[i] << endl;
            return 0;
         }
    }
    cout <<"-1" << endl;
    return 0;
}