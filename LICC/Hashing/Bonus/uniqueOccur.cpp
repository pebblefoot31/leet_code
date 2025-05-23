#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {


    vector<int> arr = {1,2};
    bool unique = true;
    map<int,int> occur;
    set<int> freq;

    for (int i = 0; i < arr.size(); i++) {
        occur[arr[i]]++;
    }

    map<int,int>::iterator it = occur.begin();

    while(it != occur.end()) {

        if (freq.find(it->second) != freq.end()) {
            unique = false;
        }

        freq.insert(it->second);
        it++;
    }

    cout << unique << endl;

    return 0;

}

