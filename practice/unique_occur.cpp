#include <iostream>
#include <vector>

int main() {


    std::vector<int> nums = {1,2,2,2,3,3,5,5,5,5,6,6};
    std::vector<int> occur;
    std::vector<int> considered;
    int count = 0;
    bool unique = true;

    std::vector<int>::iterator seeker = nums.begin();

    for (int i = 0; i < nums.size(); i++) {

        seeker = copy.find(copy.begin(), copy.end(), nums[i]);

        if (seeker == copy.end()) {
            count = 0;
            seeker = nums.begin();

            while (1) {

                seeker = nums.find(nums.begin(), nums.end(), nums[i]);
                if (seeker != nums.end()) {
                    count++;
                } else {
                    occur.push_back(count);
                    break;
                }
            }
        }

        seeker = occur.find(occur.begin(), occur.end(), count);

        if (seeker != occur.end()) {
            unique = false;
            break;
        }

        count = 0;
    }

    if (unique) {
        std::cout << "this vector is unique!!" << std::endl;
    }

    //cerate a vector that keeps track of the 
    //number of occurrences for each unique val in 
    //our vector of ints
    //while looping through ints, if any val occurs the same
    //num of times as any other val
    //return false
    //otherwise, if all unique vals in the vector have a unique
    //number of occurrences, return true.

    
    return 0;
}
