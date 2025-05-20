#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {

    // Longest substring without a duplicate letter
    //sliding window with a set to see if we have encountered that letter in the window yet
    //move right until we have a duplicate
    //then move one left and repeat checking for duplicate
    //do this until right is at end or left is the same as right
    
    string s = "b";
    int val = 0;
    set<char> chars;

    int left = 0;
    int right = 0;
    int currVal = 0;

    while (right < s.size()) {

       //found the character
       if (chars.find(s[right]) != chars.end()) {
           while (s[left] != s[right]) {
               
                //remove characters until you encounter that same character
                chars.erase(s[left]);
                //shorten window
                left++;
           }
                //remove that dupe char
                chars.erase(s[left]);
                //shorten window
                left++;

       } else {
           //did not find character- add it to the set, expand window
           chars.insert(s[right]);
           //expand the right window
           right++;

           //update val to the max it has been
           currVal = right - left;
           if (currVal > val) {
                val = currVal;
           }

       }
    }

    return 0;
}

