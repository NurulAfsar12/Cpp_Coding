#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        if(i%3 == 0)
        {
            cout << "Fizz" <<endl;
        }
        else
            cout << i << endl;
    }
    return 0;
}