#include <iostream>
#include <map>
#include <set>
using namespace std;


int main() {


    //string text  = "loonbalxballpoon";
    //string text = "balllllllllllloooooooooon";
    string text = "balloonxxxxxxx";

    //make it work with 3 l's but enough of all others to have 1 if not 2
    string target = "balloon";
    map<char, int> letters;
    map<char, int> letters_check;

    set<int> freq;

    // actual letters
    for (int i = 0; i < target.length(); i++) {
        letters[target[i]]++;
    }

    // given letters
    for (int j = 0; j < text.length(); j++) {
        letters_check[text[j]]++;
    }

   map<char, int>::iterator it = letters.begin(); 
   int times;
   bool flag;
   flag = true;

   if (letters_check.size() >= letters.size()) {
         for (it; it != letters.end(); it++) {

             //checking if that letter exists
             if (letters_check.find(it->first) != letters_check.end()) {
                 //ensuring that the letter frequency is not less than what is expected 
                 if (letters_check[it->first] >= it->second) {
                    times = letters_check[it->first]/it->second; 
                    freq.insert(times);
                 } else {
                     flag = false;
                 }
            }
        } 
   }

    int ans = 0;
    if (flag) {
        for (auto x : freq) {
            if (x != 0) {
                ans = x;
                break;
            }
        }
    } else {
        ans = 0;
    }

   cout << ans << " times." << endl;

   return 0;
}
