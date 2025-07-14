#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {

    vector<int> sticks = {2,4,3};
    int x;
    int y;
    int minCost = 0;
    int currCost;
    
    // Creating a min-priority queue
    priority_queue<int,vector<int>, greater<int>> cost(sticks.begin(), sticks.end());

    while (cost.size() > 1) {

        x = cost.top();
        cost.pop();
        y = cost.top();
        cost.pop();

        currCost = x+y;
        minCost += x+y;

        cost.push(currCost);
    }

    cout << minCost << endl;

    return 0;
}
