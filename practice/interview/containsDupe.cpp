#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Level: Easy
// Goal: this program should return true if any value in an array is duplicated and false otherwise
// Data structures used: Array, Hashmap
// Time complexity of program: O(n) because each loop will only run as long as the inputted array

int main() {

    vector<int> nums = {1,2,3,1};
    unordered_map<int,int> freq;
    
    // sorting (best sol)
    sort(nums.begin(), nums.end());

    for (int k = 0; k < nums.size()-1; k++) {
        if (nums[k] == nums[k+1]) {
            return 1;
        }
    }

    // using hashmap

    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }

    unordered_map<int,int>::iterator it = freq.begin();

    while (it != freq.end()) {
        if (it->second >= 2) {
            return 1;
        }
        it++;
    }

    return 0;
}
