#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    bool same = true;
    for(int i=0; i<n; i++){
        if(arr[0] != arr[i]){
            same = false;
            break;
        }
    }
    if(same)
    cout <<"same" <<endl;
    else
    cout <<"Not same" << endl;
    return 0;
}