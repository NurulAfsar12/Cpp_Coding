#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int target ;
    cin >> target;
    int i=0; 
    for(int j=1; j<n; j++)
    {
        if(v[i] + v[j] == target)
        {
            cout << i <<" " << j << endl;
        }
        else{
            i++;
        }
    }
    return 0;
}