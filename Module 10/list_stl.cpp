#include <bits/stdc++.h>
using namespace std;

int main()
{
    //list <int> l(10,6);
    // for(auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    //list<int> l = {1,2,3,4,5};
    //vector <int> v = {10,20,30};
    // int arr[] = {1,3,4,5,6};
    // list <int> l2(arr, arr+5);
    // l2.clear();

    list<int> l = {10,20,30,40,50};
    // l.push_back(40); //insert at tail
    // l.push_front(100); // insert at head
    // l.pop_back(); //delete at tail
    // l.pop_front(); // delete at head
    //l.insert(next(l.begin(),3),100); //insert at ant positions
    //l.erase(next(l.begin(),2),next(l.begin(),4));//delete at any pos
    //cout << *next(l.begin(),2); //access element in list
    
    //replace(l.begin(),l.end(),20,100);
    auto it = find(l.begin(),l.end(),20);
    if(it == l.end())
    {
        cout << "Not found" << endl;
    }
    else{
        cout << "Found" << endl;
    }
    for(int val : l) // ranged based for loop
    {
        cout << val << " ";  
    }
    
    return 0;
}