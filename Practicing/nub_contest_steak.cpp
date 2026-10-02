#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    cout << max(2, ((2*n + k -1)/k)) << endl;
    return 0;

}