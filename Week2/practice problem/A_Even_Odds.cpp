#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int k;
    cin >> k;
    vector <int> v;
    for(int i=1; i<=n; i+=2){
        v.push_back(i);
    }
    for(int i=2; i<=n; i+=2){
        v.push_back(i);
    }
    cout << v[k-1] << endl;
    return 0;
}