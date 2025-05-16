#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    
    //vector<int> nums = {5,7,3,9,4,9,8,3,1};
    vector<int> nums = {5,1000000};
    map<int,int> count;
    int unique;

    for (int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;    
    }

   map<int,int>::reverse_iterator x = count.rbegin();

   for (x; x != count.rend(); x++) {
        if (x->second == 1) {
            unique = x->first;
            cout << unique << endl;
            break;
        }
    }

    return 0;
}
