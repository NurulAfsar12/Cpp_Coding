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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max1 = 0, max2 = -1;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] > arr[max1])
            {
                max2 = max1;
                max1 = i;
            }
            else if (max2 == -1 || arr[i] > arr[max2])
            {
                max2 = i;
            }
        }
        if (max1 >= max2)
        {
            cout << max2 << " " << max1 << endl;
        }
        else
        {
            cout << max1 << " " << max2 << endl;
        }
    }

    return 0;
}