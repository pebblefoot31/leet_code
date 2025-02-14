/*The purpose of this program is
 to determine the maximum number 
 of subarrays whose elements have a
 product of <= k, given some subarray.*/

/*********  IN PROGRESS *******/

#include <iostream>
#include <vector>

using namespace std;
int main() {

    vector<int> nums {10,5,2,6};
    int k = 100;

    int i = 0;
    int j = 0;
    int length = 0;
    int tot= 0;
    int product = 1;
    
    for (j; j < nums.size(); j++) {

        product = nums[i];
        while (i < j) {

            cout << "product " <<  product << endl;
            cout << "tot " << tot << endl;

            product *= nums[j];

            if (product <= k) {
                tot++;

            } else {
                product /= nums[i]; 
            }

            i++;
        }
    }

    cout << "the max subarrays are: " << tot << endl;
    
    return 0;
}
