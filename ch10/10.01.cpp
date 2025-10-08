#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    vector<int>a;
    int temp;
    int val;
    cin>>val;
    while(cin>>temp)
        a.emplace_back(temp);
    cout<<count(a.begin(),a.end(),val);
}
 
