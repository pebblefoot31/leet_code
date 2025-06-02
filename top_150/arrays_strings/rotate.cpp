#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    //vector<int> nums = {1,2,3,4,5,6,7};
    //vector<int> nums = {1,2,3};
    int k = 1;

    int start = 0;
    int end = nums.size()-1;
    int tmp = 0;
    int last = nums[end];

    //starting from the end, go back k times
    //store that val in a temporary element
    //shift all elements over (set j = [j-1]) starting from back
    //all shift except for very front, which we will set
    //to the tmp element

    cout << "---------------------" << endl;
    for (int z = 0; z < nums.size(); z++) {
        cout << nums[z] << " ";
    }
    cout << endl;
    cout << "---------------------" << endl;


    int x;
    for (int i = 0; i < k; i++) {

        //save the last
        last = nums[end];

        //shift all over
        for (int j = end; j > start; j--) {
           nums[j] = nums[j-1];
        }

        //set the front to what was the last
        nums[0] = last;

    }

    cout << "---------------------" << endl;
    for (int z = 0; z < nums.size(); z++) {
        cout << nums[z] << " ";
    }
    cout << endl;
    cout << "---------------------" << endl;


    return 0;

}
