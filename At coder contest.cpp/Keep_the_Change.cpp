#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int sum = 0;
    while(n--)
    {
        int y,x;
        cin >> y >> x;
        string s;
        cin >> s;
        if(s == "keep")
        {
            sum += (x - y);
        }

    }
    cout << sum << endl;
    return 0;
}