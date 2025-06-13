#include <iostream>
#include <vector>
using namespace std;

int main () {

    //make an array of differencs
    //if the number is a positive number, add it to the sum
    //the sum at the end is the max profit
   // vector<int> prices = {7,1,5,3,6,4};
    vector<int> prices = {1,2,3,4,5,6};
    vector<int> diff;
    int maxProfit = 0;

    for (int i = 0; (i < prices.size()-1); i++) {
        diff.push_back(prices[i+1]-prices[i]);
    }

    for (int j = 0; j < diff.size(); j++) {
        
        cout << "diff: " << diff[j] << endl;
        cout <<"maxProfit: " << maxProfit << endl;
        if (diff[j] > 0) {
            maxProfit += diff[j];
        }
    }

    return 0;
}

