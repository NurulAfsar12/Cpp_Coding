#include <bits/stdc++.h>
using namespace std;

int main()
{
    list <int> l = {10,20,30,40,50,20,60,20};
    //l.remove(20);//remove specefic element in the list
    //l.sort(); //sorting small to big
    // l.sort(greater<int>());//sorting big to small
    // l.unique();//first need to sort then using this unique function
    l.reverse(); //reversing the list
    for(int val : l)
    {
        cout << val << " ";
    }
    return 0;
}