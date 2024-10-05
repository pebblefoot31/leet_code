#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums = {1, 12, -5, -6, 50, 3};

    int k = 4;

    int start = 0;
    int end = start + k;
    float avg = 0;
    float currAvg = 0;
    float total;

    if (k >= 1 && k <= nums.size()) {

        while (end < nums.size()) {

            for (int i = start; i < end; i++) {

                std::cout << "adding: " << nums[i] << " "; 
                
                total += nums[i];
            }
            
            std::cout << std::endl;

            currAvg = total/k;

            if (start == 0) {

                avg = total/k;
                
            } else {

                if (currAvg > avg)
                    avg = currAvg;
            }

            std::cout << "the current average is: " << currAvg << std::endl;
            std::cout << "the max average is: " << currAvg << std::endl;

            total = 0;

            start++;
            end++;
        }

    }

    std::cout << "the greatest average is: " << avg << std::endl;

    return 0;
}
