#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums = {1,2,0,0,0,10,0,3,0,8,0};

    int lastNonZeroIndex = 0;

    for (int i = 0; i < nums.size(); i++) {

        if (nums[i] != 0) {
            nums[lastNonZeroIndex] = nums[i];
            lastNonZeroIndex++;
        }
    }
    
    // Fill the remaining positions with zeros
    for (int i = lastNonZeroIndex; i < nums.size(); i++) {
        nums[i] = 0;
    }

    for (int v = 0; v < nums.size(); v++) {

        std::cout << nums[v] << " ";
    }

    std::cout << std::endl;
}
