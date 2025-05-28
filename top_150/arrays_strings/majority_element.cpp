#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    
    vector<int>nums = {3,2,3};
    map<int,int> freq;
    int num = 0;

    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++; 
        if (freq[nums[i]] > nums.size()/2) {
            num = nums[i];
            break;
        }
    }

    cout << num << endl;
    return 0;
}
