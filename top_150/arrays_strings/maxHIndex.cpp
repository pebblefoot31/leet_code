#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main () {


    //sort the array
    //loop through the array and 
    //determine whether the nums[i] <= size-i
    //that becomes the max H until we 
    //encounter another h that is bigger
    
    //vector<int> citations = {3,0,6,1,5};
    //vector<int> citations = {1,3,1};
    //vector<int> citations = {0,0,5};
    //vector<int> citations = {11,13};
    vector<int> citations = {1,7,9,4};
    //vector<int> citations = {100};
    //vector<int> citations = {0,1,1};
    //vector<int> citations = {0,0};
    sort(citations.begin(), citations.end());
    map<int,int> counts;
    int max = 0;

    for (int i = 0; i < citations.size(); i++) {
        if (citations[i] > 0) {
            counts[citations[i]]++;
        }
    }
    
    map<int,int>::reverse_iterator it = counts.rbegin();
    int h = 0;
    int sum = 0;
    while (it != counts.rend()) {

        sum += it->second;
        cout << "element " << it->first << endl;
        cout << "elem count " << it->second << endl;
        if (it->first <= sum) {
             h = it->first;
             break;
        } else {
            h = sum;
        }

        it++;
    }

    cout << h << endl;

    return 0;
}
