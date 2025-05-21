#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {

    string path = "WSSSEWNSNN";
    map<int,set<int>> points;
    bool flag = false;
    int prevH = 0;
    int prevV = 0;
    int currH = 0;
    int currV = 0;

    points[currH].insert(currV);
    for (int i = 0; i < path.size(); i++) {

        if (path[i] == 'N') {
            currV = ++prevV;
        } else if (path[i] == 'S') {
            currV = --prevV;
        } else if (path[i] == 'E') {
            currH = ++prevH;
        } else if (path[i] == 'W') {
            currH = --prevH;
        }
        
        //checking if that combination is in the map of points
        if ((points.find(currH) != points.end()) && (points[currH].find(currV) != points[currH].end())) {
            flag = true;
            break;
        } 

        points[currH].insert(currV);

        //update for next iteration
        prevH = currH;
        prevV = currV;
    }

    if (flag) {
        cout << "TRUE";
    } else {
        cout << "FALSE";
    }
    cout << endl;

    //if dupes are present, then return false
    //otherwise true

    return 0;
}
