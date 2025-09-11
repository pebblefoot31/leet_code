#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Determine the max profit we can make given a set of stock prices below
    vector<int> prices = {7,1,5,3,6,4};
    int maxProfit = 0;
    int currProfit;
    int buy = 0;
    int sell = 1;

    for (int i = sell; i < prices.size(); i++) {
        
        currProfit=prices[sell]-prices[buy];
        if (prices[sell] < prices[i]) {
            sell = i;
        }

        if (prices[buy] > prices[i-1]) {
            buy = prices[i-1];
        }

        maxProfit = max(currProfit, prices[sell]-prices[buy]);
    }

    cout << maxProfit << endl;
    return 0;
}

/* Main concepts used:
*  Dynamic programming: 
*/
