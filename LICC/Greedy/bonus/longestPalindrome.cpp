#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    string s;
    int length;
    int count = 1;
    bool center = false;

    sort(s.begin(); s.end());

    char prev = s[0];
    for (int i = 1; i < s.size(); i++) {

        if (s[i] == prev) {
            count++;     
        } else {

            if (!center) {
                if (count == 1 || count%2 != 0) {
                    center = true;
                    length += count;
                } 
            } else if (count%2 == 0) {
                    length+=count;
            }

            count = 0;
        }

        prev = s[i]; 
        
    }

    cout << length << endl;
}

