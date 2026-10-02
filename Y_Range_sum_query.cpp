#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;

    vector <long long int> v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }
    vector <long long int> prep(n+1);
    prep[1] = v[1];
    for(int i=2; i<=n; i++){
        prep[i] = prep[i-1] + v[i];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        long long int sum = 0;
        if(l==1){
            sum = prep[r];
        }
        else{
            sum = prep[r] - prep[l-1];
        }
        cout << sum << endl;
    }
    return 0;
}