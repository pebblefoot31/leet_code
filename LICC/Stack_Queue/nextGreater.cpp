#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};
    vector<int> ans(nums1.size(), -1);
    map<int,int> inds;
    bool flag = false;

    for (int k = 0; k < nums2.size(); k++) {
        inds[nums2[k]] = k;
    }

    for (int i = 0; i < nums1.size(); i++) {

        flag = false;
        int ind = inds[nums1[i]];
        for (int j = ind+1; j < nums2.size(); j++) {

            if (nums2[j] > nums1[i]) {
                ans[i] = nums2[j];
                break;
            }
        }
    }

    for (int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }

    cout << endl;


    return 0;
}



