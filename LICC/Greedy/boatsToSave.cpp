#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> people = {8,2,6,2,6};
    sort(people.begin(), people.end());
    int limit = 8;
    int boats = 0;
    bool paired = false;

    int i = 0;
    int j = people.size()-1;
    while (i <= j) {
        if (people[i] + people[j] <= limit) {
            i++;
            j--;
        } else {
            j--;
        }

        boats++;
    }

    cout << boats << endl;

    return 0;
}
