#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            string s;
            cin >> a >> s;
            for (char ch : s)
            {
                if (ch == 'U')
                {
                    if (v[i] == 0)
                    {
                        v[i] = 9;
                    }
                    else
                        v[i]--;
                }
                else
                {
                      if (v[i] == 9)
                    {
                        v[i] = 0;
                    }
                    else
                        v[i]++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout <<endl;
    }
    return 0;
}