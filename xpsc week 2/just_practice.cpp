#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int d, x, y;
        cin >> d >> x >> y;

        bool possible = false;
        for (int i = 0; i <= y; i++)
        {

            if (i * d > 100)
                break;

            int budget = y - i;
            int m_price = x * (100 - i * d);

            if (budget * 100 >= m_price)
            {
                cout << i << endl;
                possible = true;
                break;
            }
        }

        if (possible == false)
            cout << -1 << endl;
    }

    return 0;
}