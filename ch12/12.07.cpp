#include<memory>
#include<vector>
#include<iostream>
using namespace std;
void add(shared_ptr<vector<int>> p,int &num)
{
    p->push_back(num);
}
void write(shared_ptr<vector<int>> p)
{
    for(auto t:*p)
        cout<<t;
}
int main ()
{
    auto pos=make_shared<vector<int>>();
    int num;
    while(cin>>num)
        add(pos,num);
    write(pos);
}
