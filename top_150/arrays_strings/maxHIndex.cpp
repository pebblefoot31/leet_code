#include <iostream>
#include <vector>
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
    vector<int> citations = {11,15};
    sort(citations.begin(), citations.end());

    int maxCitations  = 0;
    int numCitations = 0;
    int maxH = 0;

    if (citations.size() == 1) {
        if (citations[0] > 0) {
            maxH = 1;
        }
    } else {

        for (int i = 0; i < citations.size(); i++) {

            maxCitations = max(citations[i], maxCitations);

            if (citations[i] <= (citations.size()-i)) {
                maxH = max(citations[i], maxH);
            } 


            // if (citations[i] > 0 && (i == citations.size()-1)) {
            //     if (maxH == 0) {
            //         maxH = 1;
            //     }
            // }
        }
    }

    // if (citations.size() < maxCitations) {
    //     maxH = min(numCitations, maxCitations); 
    // }

    cout << maxH << endl;

    //0,1,3,5,6

    //0 does not pass, 1 does not pass, 3 passes

    //1,1,3

    //1 does not pass, 1

    
    return 0;
}
