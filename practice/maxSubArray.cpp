#include <iostream>
#include <vector>
using namespace std;

int main() {

     int k = 4;
     int i = 0;
     int j = k-1;
     double maxAvg, currAvg, sum;
     vector<int> nums = {0,1,1,3,3};
     //vector<int> nums = {1,12,-5,-6, 50,3};
     
     if (nums.size() == 1) {
             return nums[0];
     }
        
     while (j != nums.size()-1) {
     
         sum = 0;
         cout << "i: " << i << endl;
         cout << "j: " << j << endl;
         for (int l=i; l <= j; l++) {
             
             sum += nums[l];
             cout << "cur num: " << nums[l] << endl;
             cout << "sum: " << sum << endl;
         }
         
         currAvg = sum/k;
         
         if (i = 0) {
             maxAvg = currAvg;
         } else {
             if (maxAvg < currAvg) {
                 maxAvg = currAvg;
             }
         }
         
         cout << currAvg << endl;
         cout << maxAvg << endl;

         i++;
         j++;
     }
        
    return 0;
}
