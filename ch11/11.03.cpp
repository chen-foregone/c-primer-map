#include <iostream>
#include <unordered_map>  // 修正拼写错误
#include <set>
#include <string>

using namespace std;

int main() {
    string str;
    unordered_map<string, int> count;
    set<string> exclude = {"the", "a", "an", "and", "or", "but"};
    
    while (cin >> str) {
        if (exclude.find(str) == exclude.end()) {
            count[str]++;
        }
    }
    
    for (auto &t : count) {
        cout << t.first << " " << t.second << endl;
    }
    
    return 0;
}