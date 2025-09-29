#include <iostream>
#include<algorithm>
#include <map>  
#include <set>
#include <string>

using namespace std;

int main() {
    string str;
    map<string, int> count;
    while (cin >> str) {
        auto signal=count.insert({str,1});
        if(!signal.second)
        {
            signal.first->second++;
        }
    }    
    return 0;
}
///下标明显易懂