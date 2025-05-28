#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {


    // only allow at most two of the same element to appear in the array
    // remove duplicates in place
    vector<int> nums = {0,0,0,0,1,1,1,1,2,3,3,4,4,4};
    map<int,int> freqs;
    int curr;
    int j = 0;
    int end = nums.size()-1;

    // for (int l = 0; l < nums.size(); l++) { 
    //     cout << nums[l] << " ";
    // }
    // cout << endl;

    for (int i = 0; i < nums.size(); i++) {

        freqs[nums[i]]++;
        if (freqs[nums[i]] > 2) {
            curr = nums[i];

            j = i;
            while (j < (nums.size()-1)) {
                nums[j] = nums[j+1];
                j++;
                //cout << j << " : " << (nums.size()-1) << endl;
            }
            nums[nums.size()-1] = nums[i];
            end--;
            i--;
        } 

        if (end == i) {
            break;
        }
    }

    for (int z = 0; z <= end; z++) { 
        cout << nums[z] << " ";
    }
    cout << endl;

    return 0;
}
