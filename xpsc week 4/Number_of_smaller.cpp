#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        vector <int> w(n);
        int total_sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> w[i];
            total_sum += w[i];
        }

        if(total_sum == x)
        {
            cout <<"NO"<<endl;
            continue;
        }
        sort(w.begin(), w.end());
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            if(sum + w[i] == x)
            {
                swap(w[i], w[i+1]);
            }
            sum += w[i];
        }
        cout << "YES" << endl;
        for(int i=0; i<n; i++)
        {
            cout << w[i] <<" ";
        }
        cout << endl;
    }
    return 0;
}