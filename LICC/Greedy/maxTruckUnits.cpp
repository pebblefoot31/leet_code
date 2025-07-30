#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int>;
int main() {

   vector<vector<int>> boxTypes;
   int truckSize; 
   int maxUnits = 0;
   int curr = 0;
   int boxesRemaining = truckSize;

   sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b) {
           return a[1] > b[1];
   });

       for (int i = 0; i < boxTypes.size(); i++) {
           if (boxesRemaining > 0) {
               curr = min(boxesRemaining, boxTypes[i][0]);
               maxUnits += curr * boxTypes[i][1];
               boxesRemaining -= curr;
           } else {
               break;
        }
    }

    cout << truckSize << endl;
    cout << maxUnits << endl;

    return 0;
}
