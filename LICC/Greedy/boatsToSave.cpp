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

    while (people.size() > 1) {

        for (int i = 0; i < people.size(); i++) {
            cout << people[i] << " ";
        }
        cout << endl;

        //make a pair successfully
        if ((people[0] + people[people.size()-1]) <= limit) {
            //remove the pair match
            boats += 1;
            people.pop_back();
            people.erase(people.begin());

        } else {
            people.pop_back();
            boats += 1;
        }

    }

    if (people.size() == 1) {
        boats+=1;
    }
    cout << boats << endl;

    return 0;
}
