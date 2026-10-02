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
    // int target;
    // cin >> target;

    // auto it = find(v.begin(), v.end(), target);
    // if(it == v.end())
    // {
    //     cout << "Not found" << endl;
    // }
    // else{
    //     cout << "Found" << endl;
    // // }
    // for(auto it=v.begin(); it<v.end(); it++)
    // {
    //     cout << *it <<" ";
    // }
    vector <int> v2 = {10,20,30};
    //v.insert(v.begin()+2, v2.begin(), v2.end()); inserting v2 value in v
    //v.pop_back();
   // vector <int> v2;
    v2 = v;
    for(int x : v2)
    {
         cout << x <<" ";
    }
    return 0;
}