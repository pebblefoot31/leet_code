#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;

/* Date: March 21 2025
*  Difficulty: Easy
*
*  Problem: reverse each word
*  in the sentence given while
*  preserving whitespace and
*  the order of words.
*
*  Type: Sliding window + two pointers 
*/

int main() {

    string s = "Let's use this as a test";
    
    //i is the index of the beginning of a word 
    //k is the index of the end of a word 
    //j is the index of the whitespace that follows a word

    int i = 0;
    int j;
    int k;

    //useful in character swapping mechanism
    char tmp;

    while (j <= s.length()) {

        if (isspace(s[j]) || (j == s.length())) {

            k = j-1;

            //swapping characters of a word
            for (k; k > i; k--) {
               
                tmp = s[i];
                s[i] = s[k];
                s[k] = tmp;
                i++;
            }

            //setting i to beginning of next word
            i = j+1;
        }

        j++;
    }

    cout << s << endl;

    return 0;
}
