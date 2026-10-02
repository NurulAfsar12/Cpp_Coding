#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;

    vector <long long int> a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    vector <long long int> prv(n+1);
    prv[1] = a[1];
    for(int i=2; i<=n; i++){
        prv[i] = prv[i-1] + a[i];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        long long int sum = 0;
        if(l==1){
            sum = prv[r];
        }
        else{
            sum = prv[r] - prv[l-1];
        }
        cout << sum << endl;
    }
    return 0;
}