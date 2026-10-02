#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> nums(n);

    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }
    
    int t; // t = target
    cin >> t;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(nums[i] + nums[j] == t)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    return 0;
}