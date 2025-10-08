#include<new>
#include<vector>
#include<iostream>
using namespace std;
void add(vector<int>* p,int &num)
{
    p->push_back(num);
}
void write(vector<int>* p)
{
    for(auto t:*p)
        cout<<t;
}
int main ()
{
    auto pos(new vector<int>());
    int num;
    while(cin>>num)
        add(pos,num);
    write(pos);
    delete pos;
}
