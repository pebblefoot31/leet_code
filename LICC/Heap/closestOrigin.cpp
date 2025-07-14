#include <iostream>
#include <functional>
#include <queue>
#include <unordered_map>
#include <cmath>
#include <vector>
using namespace std;

typedef pair<int,pair<int,int>> pt;
int main() {

    vector<vector<int>> points = {{3,3},{5,-1},{-2,4}};
    int k = 2;

    vector<vector<int>> ans(k);
    priority_queue<pt> dists;
    int dist = 0;

    for (int i = 0; i < points.size(); i++) {
        dist = pow(points[i][0], 2) + pow(points[i][1],2);
        dists.push({dist, {points[i][0], points[i][1]}});

        // this is how the max heap keeps the k smallest number of elements
        // the larger elements slowly get filtered out
        if (dists.size() > k) {
            dists.pop();
        }
    }

    for (int i = 0; i < k; i++) {
        auto it = dists.top();
        ans[i].push_back({it.second.first, it.second.second});
        dists.pop();
    }

    return 0;
}
