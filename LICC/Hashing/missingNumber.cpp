#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/* header here */

int main() {
        
   vector<int> nums = {0,2,1};
   unordered_set<int> numbers(nums.begin(), nums.end());
   int missing;
 
   for (int i = 0; i <= nums.size(); i++) {
       if (numbers.find(i) == numbers.end()) {
           missing = i;
       }
   }
   
   return 0;
}

