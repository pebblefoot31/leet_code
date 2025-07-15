#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> asteroids = {4,9,23,4};
    int mass = 5;
    
    sort(asteroids.begin(), asteroids.end());
    for (int i = 0; i < asteroids.size(); i++) {
        if (asteroids[i] <= mass) {
           mass += asteroids[i]; 
        } else {
            cout << "Planet is destroyed." << endl;
            break;
        }
    }

    return 0;
}
