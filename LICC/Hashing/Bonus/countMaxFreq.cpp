#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {

    vector<int> nums = {1,2,3,2,1,4};
    map<int, int> freqs;
    int maxF = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        freqs[nums[i]]++;
        maxF = max(maxF,freqs[nums[i]]);
    }

    map<int, int>::iterator it = freqs.begin();
    while (it != freqs.end()) {
        if (it->second == maxF) {
            count += maxF;
        }
        it++;
    }

    cout << count << endl;

    return 0;

}

