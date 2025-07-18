#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int main() {

    vector<int> arr = {3,3,3,3,5,5,5,2,2,7};
    //vector<int> arr = {7,7,7,7,7,7};
    //vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    map<int, int> freq;
    priority_queue<int> p;

    int removed = 0;
    int set = 0;
    int target = arr.size()/2;

    //determining frequency of every number
    for (int i = 0; i < arr.size(); i++) {
       freq[arr[i]]++; 
    }

    //pushing all freqs onto a heap
    //note this could have also been done by pushing them onto a 
    //vector and sorting could also have been an alternative
    map<int,int>::iterator it = freq.begin();
    while (it != freq.end()) {
        p.push(it->second);
        it++;
    }

    //removing vals and updating the count removed
    while (removed < target) {
       removed += p.top();
       set++;
       p.pop();
    }

    cout << set << endl;
    return 0;
}
