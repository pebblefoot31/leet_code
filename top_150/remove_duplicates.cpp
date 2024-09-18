#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        bool going = true;
        int currIndex = 0;
        int unique_count = 0;
        vector<int> dupes(nums.size());
        vector<int>::iterator numsIt = nums.begin();
        vector<int>::iterator dupesIt;
        
        while (going) {

            numsIt = nums.begin();
            numsIt += currIndex; //picking up where we left off

            if (numsIt == nums.end())
                going = false;

            while (numsIt != nums.end()) {
             
                dupesIt = dupes.begin();
                dupesIt = find(dupes.begin(), dupes.end(), *numsIt);
                
                //found
                if (dupesIt != dupes.end()) {
                    nums.erase(numsIt);
                    currIndex = nums.begin() - numsIt;
                    break;

                //not found
                } else {
                    unique_count++;  
                    dupes.push_back(*numsIt);
                    numsIt++;
                }

                if (numsIt == nums.end())
                    going = false;
              
            }
        }

        return unique_count;
    }
};
