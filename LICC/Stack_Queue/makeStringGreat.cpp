#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {

    string s = "aAbBcC";
    string ans = "";

    for (int i = 0; i < s.size(); i++) {

            if (!ans.empty()) {
                if (abs(ans.back()-s[i]) == 32) {
                    ans.pop_back();
                } else {
                    ans.push_back(s[i]);
                }
            } else {
                ans.push_back(s[i]);
            }
        }

    
    cout << ans << endl;
    return 0;
}


