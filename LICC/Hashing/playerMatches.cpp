#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

/* header here */

/* FIZ TO WORK WITH EDGE CASE */

int main() {
        
    vector<vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    //vector<vector<int>> matches= {{2,3},{1,3},{5,4},{6,4}}; 
//    vector<vector<int>> matches= {{1,100000}};
    map<int,int> lose;
    set<int> losers;
    set<int> win;
    
    //creating a map of int-int key-val pairs
    //indexing by player (key) 
    // val represents losses of the player at that index in that match
    for (int i = 0; i < matches.size(); i++) {
    
        lose[matches[i][1]]++; //maintain a map of losers + frequencies
        losers.insert(matches[i][1]); //maintain a set of all winners 
        win.insert(matches[i][0]); //maintain a set of all winners 
    }
    
    vector<vector<int>> winners;
    vector<int> zero_loss;
    vector<int> one_loss;
     
    map<int,int>::iterator it = lose.begin();
     
    // lost one game
    while (it != lose.end()) {
        if (it->second == 1) {
            one_loss.push_back(it->first);
        } 
        it++;
    }

    set<int>::iterator it1 = win.begin();
    while (it1 != win.end()) {
        if (losers.find(*it1) == losers.end()) {
            zero_loss.push_back(*it1);
        }
        it1++;
    }


    winners.push_back(zero_loss);
    winners.push_back(one_loss);
    
    cout << endl;

    for (int z = 0; z < zero_loss.size(); z++) {

        cout << winners[0][z] << " lost 0 matches" << endl;
    }

    for (int o = 0; o < one_loss.size(); o++) {

        cout << winners[1][o] << " lost 1 match" << endl;
    }

   return 0;
}

