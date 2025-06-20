#include <iostream>
#include <string>
using namespace std;

int main () {

    string path = "/a//b////c/d//././/..";
    string ans;
    int dots = 0;
    int slash = 0;

    cout << path << endl;
    for (int i = 0; i < path.size(); i++) {

        if (!ans.empty() && (ans.back() == '/') && (path[i] == '/')) {
                continue;
        }

        if (path[i] == '.') {
            dots++;
        } else {
            if (dots == 1) {
               continue; 
            } else if (dots == 2) {
                while (ans.size() > 1 && ans.back() != '/') {
                    ans.pop_back();
                }
                if (ans.size() > 1 && ans.back() == '/') {
                    ans.pop_back();
                }
            }
            dots = 0;
        }


        if (dots == 0 && path[i] != '.') {
            ans.push_back(path[i]);
        }

    }


    //removing / at the end
    while (ans.size() > 1 && ans.back() == '/') {
        ans.pop_back();
    }

    cout << ans << endl;
    return 0;
}
