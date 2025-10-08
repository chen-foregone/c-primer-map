#include<iostream>
#include<vector>
#include<list>
#include<numeric>
#include<algorithm>

using namespace std;
int main ()
{
    vector<int>vec{2,3,4,5,5};
    fill_n(vec.begin(), vec.size(), 0);
    for(int t:vec)
        cout<<t<<"\n";
}