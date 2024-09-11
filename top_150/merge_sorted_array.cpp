#include <iostream>
#include <vector>
using namespace std;

#include <iostream>
#include <vector>

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

            vector<int>::iterator it1 = nums1.begin();
            vector<int>::iterator it2 = nums2.begin();

            int finalSize = n + m;
            int toAdd = finalSize - m;


            while (it2 != nums2.end()) {

                it1 = nums1.begin();
                while (it1 != nums1.end()) {

                    //inserting when encountering a value greater
                    if (*it2 < *it1 || *it1 == 0) {
                        nums1.insert(it1, *it2);
                        nums1.pop_back();
                        break;
                    }

                    it1++;
                }

                it2++;
            }
        }
};
