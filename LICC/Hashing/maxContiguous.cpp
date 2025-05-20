#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

    //vector<int> nums = {0,1,1,1,1,1,0,0,0};
    vector<int> nums = {0,1,1,0,0,0,1,0};
    map<int,int> curr;

    int left = 0;
    int right = 1;
    int currVal = 0;
    int max = 0;

    // if a number is found that causes an unbalance, we move left over and remove elements until frequencies are equal again
    // otherwise we move right and increase frequency and keep a count of max frequency
    // but we want it to be CONTIGUOUS?

    //inserting placeholders, both have a frequency of 0
    curr.insert(pair<int,int>(0, 0));
    curr.insert(pair<int,int>(1, 0));

    //inserting the first 2 values
    curr[nums[left]]++;
    curr[nums[right]]++;

    while (right < nums.size()) {

        //cout << "window: " << left << " - " << right << endl;
        //if the number of 0s and 1s is unequal AND if left and right are more than one number away from each other
        if ((curr[0] != curr[1]) && (right-left > 2)) {
            cout << "UNEQUAL" << endl;
            for (int i = left; i <= right; i++) {
                cout << nums[i];
            }
            cout << endl;

            //while (left < right) {
                //decrement count
             curr[nums[left]]--;
                //increase left border
             left++;

             right++;
             curr[nums[right]]++;
            //}

        } else {
            cout << "EQUAL" << endl;
            for (int j = left; j <= right; j++) {
                cout << nums[j];
            }
            cout << endl;

            right++;
            curr[nums[right]]++;

            right++;
            curr[nums[right]]++;

            if (curr[0] == curr[1]) {
                cout << "EQUAL" << endl;
                for (int z = left; z <= right; z++) {
                    cout << nums[z];
                }
                cout << endl;
                currVal = right-left;
                if (currVal > max) {
                    max = currVal;
                }
            }
        }


        //cout << "updated window: " << left << " - " << right << endl;
    }

    cout << currVal << endl;


}
