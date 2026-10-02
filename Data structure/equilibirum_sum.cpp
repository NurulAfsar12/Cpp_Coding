#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int total_sum = 0;
    for(int i=0; i<n; i++)
    {
        total_sum += v[i];
    }
    bool found = false;
    int left_sum = 0;
    for(int i=0; i<n; i++)
    {
        int right_sum = total_sum - left_sum - v[i];
        if(left_sum == right_sum)
        {
            cout << i << endl;
            found = true;
            break;
        }
        left_sum += v[i];
    }
    if(!found)
    {
        cout <<"no equilibrium index" << endl;
    }
    return 0;
}