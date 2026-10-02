#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    string last_word;

    while(ss >> word)
    {
        last_word = word;
    }
    cout << last_word.length() << endl;

    return 0;
}