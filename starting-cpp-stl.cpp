#include <bits/stdc++.h>

//#include <iostream>
using namespace std;
int main()
{
    vector<int> v(5,11);
    for(auto x:v)
        cout << x <<", ";
    v.push_back(23);
    cout<<"new vector"<<endl;
    for(int t:v)
        cout<<t<<", ";
    vector<int>::iterator iter=v.end();
    iter--;
    cout << endl<<*(iter);
    return 0;
}