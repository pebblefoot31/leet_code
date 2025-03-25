#include <iostream>
#include <vector>
using namespace std;

/* K-Radius solution with using prefix-sum method. */

int main() {

    vector<int> nums = {7,4,3,9,1,8,5,2,6};
    //vector<int> nums = {40527,53696,10730,66491,62141,83909,78635,18560};
    vector<int64_t> prefixSums(nums.size());
    vector<int> avgs(nums.size(), -1);

    //int k = 2;
    int k = 3;
    int minLength = k*2 + 1;
    long long currSum = 0;
    long long currAvg = 0;

    //returning an array of -1 values if the k-radius is too large for array
    if (nums.size() < minLength) {
        cout << "return -1 array." << endl;

    } else {

        //computing prefix sums array 
        for (int i = 0; i < nums.size(); i++) {

            currSum += nums[i];
            prefixSums[i] = currSum;
        }

        //iterating through radius centerpoints
        for (int j = k; j < (nums.size() - k); j++) {

            //referring to prefix sums array to determine sum
            if (j == k) {
                currSum = prefixSums[j+k];
            } else {
                currSum = prefixSums[j+k] - prefixSums[j-k-1];
            }

            //computing average + storing in array
            currAvg = currSum / (k*2 + 1);
            avgs[j] = currAvg; 
        }
    }

    for (int x = 0; x < avgs.size(); x++) {
        cout << avgs[x] << " ";
    }

    cout << endl;

    //expected: [-1,-1,46717,55393,60381,61947,-1,-1]
    
    return 0;
}
