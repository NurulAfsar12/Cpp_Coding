#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<min({a,b,c,d})<<endl;
    cout<<max({a,b,c,d})<<endl;
    swap(a,b);
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    return 0;
}
