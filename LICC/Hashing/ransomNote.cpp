#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {

    // return true if ransomNote string can be constructed
    // from Magazine string

    string magazine = "aaaaba";
    string ransomNote = "bba";
    map<int, int> magFreq;
    map<int, int> ranFreq;
    bool flag = true;
   // set<char> rans(ransomNote.begin(), ransomNote.end());

    // All letters in ransomNote must appear at least once in
    // a multiple of the frequency that they appear in
    // magazine (like the balloon problem)
    // length of magazine must be greater than or equal to ransom note

    // Construct map of letter frequency for both strings
    if (magazine.size() >= ransomNote.size()) {
        for (int i = 0; i < magazine.size(); i++) {
            magFreq[magazine[i]]++;
            if (i < ransomNote.size()) {
                ranFreq[ransomNote[i]]++;
            }
        }
    } else {
        flag = false;
    }

    map<int,int>::iterator it = ranFreq.begin();
    map<int,int>::iterator search = magFreq.begin();

    if (flag) {
        while (it != ranFreq.end()) {

            search = magFreq.find(it->first);
            if (search != magFreq.end()) {
                if (magFreq[it->first]/it->second < 1) {
                    flag = false;
                    break;
                }
            } else {
                flag = false;
                break;
            }

            it++;
        }
    }
        
    if (flag) {
        cout << "True, you can construct " << ransomNote << " from " << magazine << endl;
    } else {
        cout << "False, you can't construct " << ransomNote << " from " << magazine << endl;
    }
    return 0;
    
}
