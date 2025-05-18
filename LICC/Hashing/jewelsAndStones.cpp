#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {

    //build a map of the stone frequencies
    //iterate through jewels to and add up the frequencies for
    // every match in stones map

    string stones = "ZZbbbb";
    string jewels = "z";
    int count = 0;
    map<char,int> stoneFreq;
    set<char> jewelSet(jewels.begin(), jewels.end());

    for (int i = 0; i < stones.size(); i++) {
        stoneFreq[stones[i]]++;
    }

    set<char>::iterator it = jewelSet.begin();

    while (it != jewelSet.end()) {
        if (stoneFreq.find(*it) != stoneFreq.end()) {
                count += stoneFreq[*it];
        }
        it++;
    }

    cout << "You have " << count << " jewels in your stones!" << endl;
    return 0;

}
