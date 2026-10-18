#include <bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int>nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
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