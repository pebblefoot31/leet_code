#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {


    vector<vector<string>>paths = {{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    set<string> outgoing;
    string noneOutgoing = "";

    for (int i = 0; i < paths.size(); i++) {
        outgoing.insert(paths[i][0]);
    }

    for (int j = 0; j < paths.size(); j++) {
        if (outgoing.find(paths[j][1]) == outgoing.end()) {
            noneOutgoing = paths[j][1];
        }
    }

    cout << noneOutgoing << endl;

    return 0;
}
