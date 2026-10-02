#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int val;
    cin >> val;
    bool found = false;
    int l = 0;
    int r = n - 1;
     
    while(l <= r){
        int mid = (l+r)/2;
        if(v[mid] == val){
            found = true;
            break;
          }
        else if(v[mid] > val){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
        }
    if(found == true){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    return 0;
}
