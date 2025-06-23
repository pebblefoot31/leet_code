#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () {

    string path = "/a//b////c/d//././/..";
    istringstream ss(path);
    string ans;
    string seg;
    int dots = 0;
    int slash = 0;

    cout << path << endl;

    while (getline(ss, seg, '/')) {
        cout << seg << endl;

        if (!ans.empty()) {
            if (seg == "..") {
                ans.pop_back();
            } else if (seg == ".") {
                continue;
            } else {
                ans.append(seg + "/");
            }
        } else {
            ans.append(seg + "/");
            ans.append(seg);
        }

    }


    //removing all / at the end
    while (ans.size() > 1 && ans.back() == '/') {
        ans.pop_back();
    }

    cout << ans << endl;
    return 0;
}
