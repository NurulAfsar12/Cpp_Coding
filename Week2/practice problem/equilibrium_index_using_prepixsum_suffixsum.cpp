#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    //prefix sum 
    vector <int> prep(n);
    prep[0]  = v[0];
    for(int i = 1; i < n; i++){
        prep[i] = prep[i-1] + v[i];
    }

    //suffix sum
    vector<int> suff(n);
    suff[n-1] = v[n-1];
    for(int i = n-2; i >= 0; i--){
       suff[i] = suff[i+1] + v[i]; 
    }

    for(int i = 0; i < n; i++){
        if(prep[i] == suff[i]){
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}