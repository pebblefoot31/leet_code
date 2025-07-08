#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main () {

    //vector<int> nums = {100,4,200,1,3,2};
    vector<int> nums = {1,0,1,2};
    set<int> all(nums.begin(), nums.end());
    int curr = 1;
    int nextVal;
    int maxLength = 0;

    set<int>::iterator it = all.begin();
    nextVal = *it + 1;

    //solve this again using find() functionality
    while (it != all.end()) {

        if (nextVal == *it) {
            curr++;
            maxLength = max(maxLength, curr);
        } else {
            maxLength = max(maxLength, curr);
            curr = 1;
        }

        if (it == all.begin()) {
            it++;
            continue;
        }
        
        nextVal = *it + 1;
        it++;
    }

    cout << maxLength << endl;

    return 0;
}
