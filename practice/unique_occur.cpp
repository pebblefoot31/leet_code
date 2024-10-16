#include <iostream>
#include <vector>
#include <algorithm>

int main() {


    //std::vector<int> nums = {1,2,2,2,3,3,3,3};
    std::vector<int> nums = {-3,0,1,-3,1,1,1,-3,10,0};

    std::vector<int> occur;
    std::vector<int> considered;

    int count = 0;
    bool unique = true;

    std::vector<int>::iterator seeker = nums.begin();

    if (nums.size() > 0) {

        //loop through nums
        for (int i = 0; i < nums.size(); i++) {

            //checking to see whether a particular value has already been reviewed or not
            seeker = find(considered.begin(), considered.end(), nums[i]);

            //not reviewed
            if (seeker == considered.end()) {

                    //begin determining the amount of times it appears
                    count = 0;
                    for (int j = i; j < nums.size(); j++) {

                        if (nums[j] == nums[i])
                            count++;
                    }

                    //since it has now been considered
                    considered.push_back(nums[i]);
                

                //checking if that count appears in vector of occurence vals
                seeker = find(occur.begin(), occur.end(), count);

                //found
                if (seeker != occur.end()) {
                    unique = false;
                    break;
                } else { //otherwise we add this occurence value to vector
                    occur.push_back(count);
                }
            }

            count = 0;
        }
    }

    //result is printed
    if (unique) {
        std::cout << "this vector is unique!!" << std::endl;
    } else {

        std::cout << "not unique :(" << std::endl;
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
