#include <iostream>
#include <vector>
using namespace std;

/* Date: March 22 2025
*  Difficulty: Easy
*
*  Problem: find the 
*  least common value bw
*  two arrays sorted in
*  increasing order.
*
*  Type: Sliding window + two pointers
*/


int main() {

    vector<int> nums1 = {1,2,3,6};
    vector<int> nums2 = {2,3,4,5};

    int j = 0;
    int i = 0;

    while (true) {

        if (i == nums1.size() || j == nums2.size()) {
            break;
        }

        if (nums1[i] < nums2[j]) { //first array has smaller value             
            i++;
        } else if (nums1[i] > nums2[j]) { //first array has greater value
          
            j++;
        } else { //they hold the same value
            cout << nums1[i] << endl;
            break;
        }
    }

    cout << "-1" << endl;
    return 0;

}

