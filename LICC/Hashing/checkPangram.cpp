#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

/* HEADER HERE */

int main() {

    unordered_set<char> letters(sentence.begin(), sentence.end());
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    bool flag = true;
        
    for (int i = 0; i < alphabet.size(); i++) {
        
        if (letters.find(alphabet[i]) == letters.end()) {
            flag = false;
        }
    }
    
    return 0;
}
