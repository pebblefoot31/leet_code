#include <iostream>
#include <cctype>
using namespace std;

int main() {

    //string s = "ab-cd";
    string s = "7_28]";

    int i = 0;
    int j = s.length();
    char tmp;

    if (s.length() > 1) {

        if (isalpha(s[j]) && isalpha(s[i])) {
            tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;

            j--;
            i++;
        }

        while (i < j) {

            cout << "i: " << i << endl;
            cout << "j: " << j << endl;

            while (!isalpha(s[j])) {
                j--;

                if (j == 0) {
                    break;
                }
            } 

            while (!isalpha(s[i])) {
                i++;

                if (i == s.length()) {
                    break;
                }
            } 

        }
    }

    cout << s << endl;

    return 0;
}
