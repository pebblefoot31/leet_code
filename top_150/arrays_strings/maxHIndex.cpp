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
    
    vector<int> citations = {3,0,6,1,5};
    map<int,int> counts;
    int h = 0;
    int sum = 0;

    for (int i = 0; i < citations.size(); i++) {
        if (citations[i] > 0) {
            counts[citations[i]]++;
        }
    }
    
    map<int,int>::reverse_iterator it = counts.rbegin();

    if (counts.size() == 1) {
        h = min(it->first, it->second);
    } else {
        while (it != counts.rend()) {
    
            if (it->first == it->second) {
                h = max(h,it->second);
            }
            
            sum += it->second;
            if (sum > it->first) {
                h = max(h,it->first);
                break;
            } else {
                h = max(h,sum);
            }
    
            it++;
        }
    }

    cout << h << endl;
    return 0;
}
