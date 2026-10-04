#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin >> a >> b;
    int cnt1 = a + b;
    int cnt2 = a + (a-1);
    int cnt3 = b + (b-1);

    cout << max(cnt1,max(cnt2,cnt3))<<endl;
    return 0;
}