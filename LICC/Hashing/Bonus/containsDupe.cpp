#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {

    vector<int> nums = {1,2,3,1};
    map<int,int> count;
    bool flag = false;
        
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
            if (count[nums[i]] >= 2) {
                flag = true;
            }
        }
    
    cout << flag << endl; 

    return 0;
}
