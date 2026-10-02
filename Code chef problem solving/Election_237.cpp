#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, k;
	cin >> n >> k;
    int x = n/2 + 1;
    if(k >= x)
    {
        cout << 0 << endl;
    }
    else
	    cout << x - k << endl;

}
