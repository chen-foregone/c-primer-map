#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main ()
{
    list<string>strs;
    string temp;
    string val;
    cin>>val;
    while(cin>>temp)
        strs.emplace_back(temp);
    cout<<count(strs.begin(),strs.end(),val);
}