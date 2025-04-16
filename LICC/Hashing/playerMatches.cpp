#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

/* header here */

/* FIZ TO WORK WITH EDGE CASE */

int main() {
        
    vector<vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    unordered_map<int,int> lose;
    
    for (int i = 0; i < matches.size(); i++) {
    
        lose[matches[i][1]]++;

        if (matches[i][0] > max)
            max = matches[i][0];
        if (matches[i][1] > max)
            max = matches[i][1];
    
    }
    
    vector<vector<int>> winners;
    vector<int> zero_loss;
    vector<int> one_loss;
    
    for (int j = 1; j <= 10; j++) {
    
        if (lose[j] == 0) {
            zero_loss.push_back(j);
        } else if (lose[j] == 1) {
            one_loss.push_back(j);
        }
    }

    winners.push_back(zero_loss);
    winners.push_back(one_loss);
    
    cout << endl;

   return 0;
}

