#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i=0; i<n; i++){
        int l_sum = 0; 
        int h_sum = 0;
        for(int j=0; j<i; j++){
            l_sum += v[j];
        }
        for(int j=i+1; j<n; j++){
            h_sum += v[j];
        }
        if(l_sum == h_sum){
            cout << i << endl;
            break;
        }
    }
    return 0;
}