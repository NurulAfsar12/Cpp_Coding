#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;

        int left = 0;
        int right = s.size() - 1;
        bool is_pal = true;

        while(left < right)
        {
            if(s[left] != s[right])
            {
                is_pal = false;
                break; 
            }
            left++;
            right--;
        }
        if(is_pal)
        {
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
}