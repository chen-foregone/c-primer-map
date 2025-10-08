#include<iostream>
#include<vector>
#include<list>
#include<numeric>
#include<algorithm>

using namespace std;
int main ()
{
    vector<int>vec{2,3,4,5,5};
    cout<<accumulate(vec.cbegin(),vec.cend(),0);
}