 #include <bits/stdc++.h>
 using namespace std;
 
 int main()
 {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    vector <int> v2(n);
    for(int i=0; i<n; i++)
    {
        cin >> v2[i];
    }
    vector <int> merged;

    for(int i=0; i<v.size(); i++)
    {
        merged.push_back(v[i]);
    }

    for(int i=0; i<v2.size(); i++)
    {
        merged.push_back(v2[i]);
    }
    
    sort(merged.begin(), merged.end());
    for(int i=0; i<merged.size(); i++)
    {
        cout << merged[i] << " ";
    }
    return 0;
 }