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
    int t;
    cin >> t;
    int i = 0; 
    int j = n - 1;
    // array or vector needs to be in sorted way
    while(i < j)
    {
        int sum = v[i] + v[j];
        if(sum == t)
        {
            cout << i << " " << j << endl;
            break;
        }
        else if(sum > t){
            j--;
        }
        else{ 
            i++;
        }
    }
    return 0;
}