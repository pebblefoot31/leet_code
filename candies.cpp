#include <iostream>
#include <string>
#include <vector>

int main() {

   int candies[6] = {5,7,9,2,10,3};
   bool analysis[6];
   int extraCandies = 3;
   bool most = true;

   int sz = (sizeof(candies))/(sizeof(candies[0]));

   for (int i = 0; i < sz; i++) {

      int totCandy;

      totCandy = candies[i] + extraCandies;

      for (int j = 0; j < sz; j++) {

         if (candies[j] > totCandy) {
             most = false;
         }

      }

      if (most) {
          std::cout << candies[i] << " + " << 
              extraCandies << " = " << 
              totCandy << " is the GREATEST." << std::endl;
          analysis[i] = true;
      }

      else {

          std::cout << candies[i] << " + " << 
              extraCandies << " = " << 
              totCandy << " is NOT the GREATEST." << std::endl;
          analysis[i] = false;

      }

      most = true;
   }

   for (int k = 0; k < 6; k++) {

       if (analysis[k])
           std::cout << "true, ";
       else
           std::cout << "false, ";

   }

   std::cout << std::endl;

   return 0;

}
