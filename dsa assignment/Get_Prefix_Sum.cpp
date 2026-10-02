#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <long long int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    vector<long long int> prep(n);
    prep[0] = v[0];
    for(int i=1; i<n; i++){
        prep[i] = prep[i-1] + v[i];
    }
    reverse(prep.begin(), prep.end());
    for(int i=0; i<n; i++){
         cout << prep[i] <<" ";
    }
    return 0;
}