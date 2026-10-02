#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int rem = n - k;
        int need = rem % 2;

        vector<int> freq(26, 0);

        for (char c : s)
        {
            freq[c - 'a']++;
        }
        int odd = 0;

        for (int x : freq)
        {
            if (x % 2 != 0)
                odd++;
        }

        if (odd <= k + need)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}