#include<bits/stdc++.h>
using namespace std;

int* p;
void fun()
{
    //int x = 10;
    //p = &x;
    int* x = new int;
    *x = 10;
    p = x;
    cout<<"X in fun function: "<<*p<<endl;
    return;
}
int main()
{
    fun();
    cout<<"X in main function: "<<*p<<endl;
    return 0;
}
