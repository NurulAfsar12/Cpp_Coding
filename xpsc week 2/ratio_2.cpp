#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        int cnt = 0;
        if(x >= (2*y) || y >= (2*x))
        {
            cout << cnt << endl;
        }
        else if(x <= y)
        {
            while(x<=y)
            {
               if(y >= (2*x))
               {
                   cout << cnt << endl;
                   break;
               }
               cnt++;
               x--;
            }
        }
        else
        {
             while(x>=y)
            {
               if(x >= (2*y))
               {
                   cout << cnt << endl;
                   break;
               }
               cnt++;
               y--;
            }
        }
    }
    }
