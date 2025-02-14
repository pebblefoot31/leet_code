/* The goal of this program
 is to determine the longest
 possible subarray of consecutive
 1s, given a binary array.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    vector<int> nums = {1,1,0,1,1,0,0,1,1,1};

    int i = 0;
    int j = 0;
    int length;
    int max = 0;
    int count = 0;

    for (j; j < nums.size(); j++) {
        
        if (nums[j] == 0) {
            count++;
        }

        while (count > 1) {

            if (nums[i] == 0) {
                count -= 1;
            }

            i++;
        }

        length = j - i + 1;
        if (max < length) {
            max = j-i+1;
        }
    }

    cout << "max subarray length is: " << max << endl;
    return 0;

}
