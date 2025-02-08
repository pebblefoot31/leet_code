#include <iostream>
#include <vector>
#include <stdlib.h>
#include <math.h>

int main() {

    std::vector<int> nums = {-7,-5,0,3,19};
    std::vector<int> sorted(nums.size());

    int i = 0;
    int j = nums.size()-1;
    int count = nums.size()-1;

    for (int k = 0; k < nums.size(); k++) {

        std::cout << nums[k] << " ";
    }

    std::cout << std::endl;

    while (i <= j) {

        if (abs(nums[i]) > abs(nums[j])) {
            sorted[count] = (nums[i] * nums[i]);
            i++;
            count--;
        } else {
            sorted[count] = (nums[j] * nums[j]);
            j--;
            count--;
        }
    }

    for (int k = 0; k < sorted.size(); k++) {

        std::cout << sorted[k] << " ";
    }

    std::cout << std::endl;

    return 0;

}
