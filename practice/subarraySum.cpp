/* Find the greatest length subarray from
 the array given that the sum of the elements
 in the subarray are <= 5*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> my_arr = [3,2,1,3,1,1];
    int i = 0;
    int j = 0;
    int sum=0;
    int k = 5;
    int window = 1;

    for (j; j < my_arr.size(); j++) {

        if (sum <= k) {
           sum += my_arr[j];
        } else {
            while (sum > k && i < j) {
                sum -= my_arr[i];
                i++;
            }
        }

        //we only update window length if the current 
        //length is greater than what the window was
        //originally calculated to be
        if ((j - i + 1 ) > window) {
            window = j - i + 1;
        } 

    }

    cout << "max length of window: " << window << endl;

    return 0;
}
