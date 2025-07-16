#include <iostream>
#include <vector>
using namespace std;

int main() {
            
        vector<int> weights = {100,200,150,1000};
        int maxWeight = 5000;
        int apples = 0;
        int curr = 0;
        sort(weight.begin(), weight.end());

        for (int i = 0; i < weight.size(); i++) {
           if (curr + weight[i] < maxWeight) {
                curr+= weight[i];
                apples++;
           } else if (curr + weight[i] == maxWeight) {
               return (apples+1);
           } else {
               return apples;
           }
        }

        return apples;
}
