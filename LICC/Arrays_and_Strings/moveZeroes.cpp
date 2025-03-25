#include <iostream>
#include <vector>

using namespace std;

/* Date: March 22 2025
*  Difficulty: Easy
*
*  Problem: Move all 0s to 
*  end of the array while 
*  preserving the original 
*  order of other numbers.
*
*  Type: Two pointers
*/

int main() {

    //vector<int> nums = {0,1,0,3,12};
    vector<int> nums = {0,1};

    //i stops when it encounters a 0
    //j continues on to find a num to stop
    int i = 0;
    int j = 0;

   if (nums.size() > 1) { 

        while (i < nums.size() && j < nums.size()) {

            if ((nums[i] == 0) && (nums[j] != 0)) {
                nums[i] = nums[j];
                nums[j] = 0;
                i++;
                j++;
            }

            if (i >= nums.size() || j >= nums.size()) {
                break;
            }

            if (nums[j] == 0) {
                j++;
            }

            if (nums[i] != 0) {
                i++;
            }

        }
   }

    for (int z = 0; z < nums.size(); z++) {
        cout << nums[z] << " ";
    }

    cout << endl;

}
