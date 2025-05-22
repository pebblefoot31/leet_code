#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {

    vector<int> nums = {1,2,3,2};
    map<int,int> n;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        n[nums[i]]++;
    }

    map<int,int>::iterator it = n.begin();
    while (it != n.end()) {

        if (it->second == 1) {
            sum += it->first;
        }

        it++;
    }

    cout << sum << endl;
    return 0;

}

