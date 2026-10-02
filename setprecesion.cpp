#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a = 20.45456;
    cout<<fixed<<setprecision(3)<<a<<endl;

    //ternary operator

    int x;
    cin>>x;
    x%2 == 0 ? cout<<"Even"<<endl : cout<<"Odd"<<endl;

    return 0;
}
