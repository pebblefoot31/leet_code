#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> people = {8,2,3,6,2,6};
    sort(people.begin(), people.end());
    int limit = 8;
    int boats = 0;
    bool paired = false;

    int j = people.size()-1;

    while (people.size() != 0) {

        for (int i = 0; i < people.size(); i++) {

            paired = false;
            //make a pair successfully
            if ((people[i] + people[people.size()-1]) <= limit) {

                paired = true;
                boats += 1;
                people.pop_back();
                //remove the pair match
                remove(people.begin(), people.end(), people[i]);
                people.pop_back();
                break;
            }
        }

        if (!paired) {
            boats += 1;

            //remove person that didn't pair
            people.pop_back();
        }

    }

    cout << boats << endl;

    return 0;
}
