#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () {

    string path = "/.../a/../b/c/../d/./";
    istringstream ss(path);
    string ans = "";
    string seg;
    int dots = 0;
    int slash = 0;

    cout << path << endl;
    ans.append("/");

    while (getline(ss, seg, '/')) {

        if (seg == "." || seg == "") {
                continue;
        } else if (seg == "..") {

            if (ans.size() > 1 && ans.back() == '/')
                ans.pop_back();

            while (ans.size() > 1 && ans.back() != '/') {
               ans.pop_back(); 
            }
        } else {
            ans.append(seg + "/");
        }

    }

    //removing all / at the end
    while (ans.size() > 1 && ans.back() == '/') {
        ans.pop_back();
    }

    cout << ans << endl;
    return 0;
}
