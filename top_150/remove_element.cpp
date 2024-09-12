#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int count = 0;
        int size = nums.size();

        vector<int>::iterator it = nums.begin();   
        bool finished = false;

        while (!finished) {

            it = find(nums.begin(), nums.end(), val);
            
            if (it != nums.end()) {
                count++;
                nums.erase(it);
                it = nums.begin();
            }

            else {
                finished = true;
            }
        }

        int notEqual = size - count;
        return notEqual;    


    }
};
