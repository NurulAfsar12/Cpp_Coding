#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i=0; i<s.size() -1 ; i++)
    {
        for(int j=1; j<s.size(); j++){
            if(s[i] != '+' && s[j] != '+'){
                if(s[i] > s[j]){
                    swap(s[i], s[j]);
                }
            }
        }
    }
    for(int i=0; i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}