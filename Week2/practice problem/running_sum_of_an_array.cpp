#include <bits/stdc++.h>
using namespace std;
void get_running_sum(vector<int> &v,int n){
    vector<int> prep(n);
    prep[0] = v[0];
    cout << prep[0] <<" ";
    for(int i=1; i<n; i++){
        prep[i] = prep[i-1] + v[i];
        cout<<prep[i]<<" ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    get_running_sum(v,n);
    return 0;
}