#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> g = {};
    vector<int> s = {};

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int i = 0;
    int count = 0;

    for (int i = 0; i < s.size(); i++) {
        
        if (j < g.size() && s[i] >= g[j]) {
            j++;
            count++;
        }

    }

    cout << count << endl;
    return 0;
    

}

