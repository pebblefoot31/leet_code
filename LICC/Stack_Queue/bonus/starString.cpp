#include <iostream>
#include <vector>
using namespace std;

int main() {

    string s = "leet**cod*e";
    string ans = "";

    for (int i = 0; i < s.size(); i++) {

        if (!ans.empty() && s[i] == '*') {
            if (ans.back() != '*') {
                ans.pop_back();
            } else {
                continue;
            }
        } else {
            ans.push_back(s[i]);
        }
    }

    cout << s << endl;
    cout << ans << endl;

    return 0;
}
