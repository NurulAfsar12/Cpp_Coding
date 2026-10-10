#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int num = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cout << num <<" ";
            num++;
        }
        cout << endl;
    }
    return 0;
}