#include <iostream>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

int main() {

    string s = "the sky is blue";
    //string s = "  a   b    "; test case not passing 
    string ans = "";

    int e = s.size()-1; 
    int b = e;
    int tmp = b;

    while (true) {

        while (isspace(s[b]) == 0 && b > 0) {
            b--;
        }

        if (b > 0) {
            tmp = b+1;
        } else {
            tmp = 0;
        }

        cout << s[tmp] << endl;

        while (tmp != e) {
            ans.push_back(s[tmp]);
            tmp++;
        }

        ans.push_back(s[tmp]);
        ans.push_back(' ');

        if (b == 0 && tmp == e) {
            break;
        }

        if (tmp == e) {
            while (isspace(s[b]) != 0) {
                b--;
            }
            e = b;
        }
    }

    cout << ans << endl;

    return 0;
}
