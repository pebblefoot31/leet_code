#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> costs = {};
    int iceCream = 0;
    int coins;
    int coinsLeft = coins;

    sort(costs.begin(), costs.end());
    for (int i = 0; i < costs.size(); i++) {

        if ((coinsLeft-costs[i]) < 0) {
            break; 
        } else {
             iceCream++;
            coinsLeft -= costs[i];
        }
    }

    cout << iceCream << endl;
    

    return 0;
}
