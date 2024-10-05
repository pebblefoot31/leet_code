#include <iostream>
#include <vector>

int main() {

    //std::vector<int> nums = {1,7,3,6,5,6};
    std::vector<int> nums = {2,1,-1};

    int pivot = 0;
    int left_sum = 0;
    int right_sum = 0;
    bool found = false;

    while (pivot < nums.size()) {

        //left sum
        if (pivot == nums.size() - 1) {

            left_sum = 0;
            
        } else {

            for (int l = pivot + 1; l < nums.size(); l++) {
                
                left_sum += nums[l];
            }
        }

        //right sum
        if (pivot > 0) {

            for (int r = 0; r < pivot; r++) {
                
                right_sum += nums[r];
            }
        }

        if (left_sum == right_sum) {
            found = true;
            break;
        }

        pivot++;
        left_sum = 0;
        right_sum = 0;
    }

    if (found) {
        std::cout << "the pivot is: " << pivot << std::endl;
    } else {
        pivot = -1;
        std::cout << "no pivot!" << pivot << std::endl;
    }
    

    return 0;
}
