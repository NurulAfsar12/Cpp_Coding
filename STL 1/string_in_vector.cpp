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
        vector<vector<string>> words(3, vector<string>(n));
        map<string, int> freq;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> words[i][j];
                freq[words[i][j]]++;
            }
        }

        vector<int> cnt(3, 0);
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (freq[words[i][j]] == 1)
                {
                    cnt[i] += 3;
                }
                else if (freq[words[i][j]] == 2)
                {
                    cnt[i] += 1;
                }
                // else
                //     cnt[i] += 0;
            }
        }
        
        cout << cnt[0] << " " << cnt[1] << " " << cnt[2] << endl;
    }

    return 0;
}