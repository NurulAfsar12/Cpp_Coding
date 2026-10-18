#include <bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int>nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    
    int i = 0, j = n-1;
    while(i < j)
    {
        int ps = nums[i] + nums[j];
        if(ps > target)
        {
            j--;
        }
        else if(ps < target)
        {
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;

    vector<int> result = pairSum(v,target);
    cout << result[0] <<", "<<result[1]<<endl;

    return 0;
}