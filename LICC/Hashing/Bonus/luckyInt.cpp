#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

//alternative approach could have been pushing back all the lucky numbers into a lucky array
// and then sorting it and returning the first (or last) element depending on how you sort

int main() {

    vector<int> nums = {2,2,3,4};
    map<int,int> freqs;
    int maxLucky = -1;

    for (int i = 0; i < nums.size(); i++) {
        freqs[nums[i]]++;
    }

    map<int, int>::iterator it = freqs.begin();
    while (it != freqs.end()) {
        if (it->second == it->first) {
            maxLucky = max(maxLucky, it->first);
        }
        it++;
    }

    cout << maxLucky << endl;

    return 0;

}

