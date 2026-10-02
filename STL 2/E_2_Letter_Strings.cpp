// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<string> s(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> s[i];
//         }
//         int cnt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for(int j=i+1; j<n; j++)
//             {
//             if ((s[i][0] != s[j][0] && s[i][1] == s[j][1]) ||
//                 (s[i][0] == s[j][0] && s[i][1] != s[j][1]))
//             {
//                 cnt++;
//             }
//             }
//         }
//         cout << cnt << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, long long> mp;
        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            for(char c = 'a'; c<='k'; c++)
            {
                if(c != s[0])
                {
                    string tmp = s;
                    tmp[0] = c;
                    cnt += mp[tmp];
                }
            }
            for(char c = 'a'; c<='k'; c++)
            {
                if(c != s[1])
                {
                    string tmp = s;
                    tmp[1] = c;
                    cnt += mp[tmp];
                }
            }
            mp[s]++;
        }
        cout << cnt << endl;
    }
    return 0;
}