#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    //string needle = "leeto";
    string needle = "issip";
    //string haystack = "leetcode";
    string haystack = "mississippi";
    int ans = 0;
    int j = 0;
    int index = 0;
    bool found = false;

    string::iterator it = haystack.begin();

    if (needle.size() > haystack.size()) {
        ans = -1;
    } else {

        while (((index = haystack.find(needle[0], index)) != string::npos) && !found) {
            for (int i = index; i < haystack.size(); i++) {
                if (needle[j] == haystack[i]) {
                    j++;
                    if (j == needle.size()) {
                        ans = index;
                        found = true;
                        break;
                    }
                } else {
                    j = 0;
                    ans = -1;
                    break;
                }
            }
            index++;
        }
    }

    if (found)
        cout << ans << endl;
    else 
        cout << -1 << endl;

    return 0;
}
