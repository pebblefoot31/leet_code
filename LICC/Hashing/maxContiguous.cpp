#include <iostream>
#include <vector>
#include <map>
using namespace std;

// could not solve, come back to this!


int main() {

    //vector<int> nums = {0,1,1,1,1,1,0,0,0};
    vector<int> nums = {0,1,1,0,0,0,1,0};
    map<int,int> curr;

    int i = 0;
    int j = i + 1;
    int max = 0;

    if (nums.size() != 0) {

        while (i < nums.size()-1) {

            //resetting
            curr.clear();
            for (int z = i; z < j; z++) {
                curr[nums[z]]++;
            }

            if (curr[0] == curr[1]) {
                if (curr[0] > max) {
                    max = curr[0];
                }

            } else {
                i++;

                if (j < nums.size() -1) {
                    j++;
                }
            }

            
        }
        
        cout << max*2 << endl;
    }



}
