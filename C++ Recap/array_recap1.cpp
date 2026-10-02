#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin >> n;
     vector <int> v(n);
     vector<int> freq(n);
     for(int i=0; i<n; i++)
     {
        cin >> v[i];
        freq[v[i]]++;
     }

     for(int i=0; i<freq.size(); i++)
     {
      cout <<i<<"->"<<freq[i]<<endl;
     }
     return 0;
}
