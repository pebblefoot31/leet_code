#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {

    vector<string> strs = {"cab","tin","pew","duh","may","ill","buy","bar","max","doc"};
    int sum = 0;
    int ind = 0;
    string tmp = "";
    unordered_map<string,int> sums;
    vector<vector<string>> ans;

    for (int i = 0; i < strs.size(); i++) {

        tmp = strs[i];
        sort(tmp.begin(), tmp.end());

        unordered_map<string,int>::iterator it = sums.find(tmp);
        if (it != sums.end()) {
            ans[it->second].push_back(strs[i]);
        } else {

            vector<string> group;
            group.push_back(strs[i]);
            ans.push_back(group);
            sums.insert({tmp, ind});
            ind++;
        }
    }

    for (int k = 0; k < ans.size(); k++) {
        for (int l = 0; l < ans[k].size(); l++) {
            cout << ans[k][l] << endl;
        }
        cout << endl;
    }

    return 0;
}
