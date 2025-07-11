#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    
    int target = 9;
    vector<int> nums = {2,7,11,15};
    unordered_map<int, int> factors;

    for (int i = 0; i < nums.size(); i++) {
           factors.insert({nums[i],i}); 
    }

    unordered_map<int,int>::iterator f = factors.begin();
    for (int i = 0; i < nums.size(); i++) {
       f = factors.find(target-nums[i]); 
       if (f != factors.end()) {
            cout << "found" << endl;
            break;
       }
    }


    return 0;
}
