#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    vector<int> prices = {7,1,5,3,6,4};
    int profit = 0;
    int buy = 0;
    int next_smallest = 0;
    bool found = false;

    //1. start at index 0 val and do a full run through of the diffeerences
    //2. then, find the next smallest number and start the next round there (if you 
    // can't find any smaller number, quit!

    while (true) {

       for (int i = buy+1; i < prices.size(); i++) {
           
            if ((prices[i]-prices[buy]) > profit) {
                profit = prices[i]-prices[buy];
            }

            if (!found) {
                if (prices[i] < prices[buy]) {
                    next_smallest = i;
                    found = true;
                }
            }
       }

       if (found) {
           buy = next_smallest;      
       } else { 
           break;
       }

       found = false;
    }

    if (profit <= 0) {
        profit = 0;
    } 

    cout << profit << endl;
    return 0;
}
