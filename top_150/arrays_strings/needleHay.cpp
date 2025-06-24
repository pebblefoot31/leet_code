#include <iostream>
#include <vector>
using namespace std;

int main() {

    string needle = "leeto";
    string haystack = "leetcode";
    int ans = 0;
    int j = 0;


    if (needle.size() > haystack.size()) {
        ans = -1;
    } else {
        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[j]) {
                j++;
                if (j == needle.size()) {
                    ans = i - j+1;
                    break;
                }
            } else {
                j = 0;
                ans = -1;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
