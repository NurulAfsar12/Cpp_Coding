#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    string row[4] = {
        "   ##########",
        "  #        #",
        " #        #",
        "##########"
    };

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << row[i];

                if (j != n - 1)
                    cout << " ";
            }
            cout << '\n';
        }
        if(t)
            cout << endl;
    }

    return 0;
}