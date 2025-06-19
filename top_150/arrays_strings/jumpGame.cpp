#include <iostream>
#include <vector>
using namespace std;

int main() {

    // iterate through array by the value at the current index 
    // if the value of index + array[index] == size-1, win!
    // if the value is < then continue
    // if the value is > then break

    //vector<int> nums = {2,3,1,1,4};
    //vector<int> nums = {3,2,1,0,4};
    vector<int> nums = {2,0};

    int i = 0;
    bool flag = false;

    while (i < nums.size()) {
        cout << "At index: " << i << " : " << nums[i] << endl;

        if (i >= nums.size()-1) {
            flag = true;    
            break;
        }
        
        if (nums[i] == 0) {
            break;
        }
        
        i += nums[i];
    }

    if (flag) {
        cout << "true" << endl;
    } else { 
        cout << "false" << endl;
    }

    return 0;
}

