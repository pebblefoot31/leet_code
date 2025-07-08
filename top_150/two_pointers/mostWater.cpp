#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() { 

    vector<int> height = {1,8,6,2,5,4,8,3,7};
    //vector<int> height = {1,2,4,3};
    //vector<int> height = {1,2,1};

    int maxVol = 0;
    int i = 0;
    int j = height.size()-1;
    int currVol = 0;
    
    while (i < j) {

:q
        currVol = (j-i)*(min(height[i],height[j]));
        maxVol = max(currVol,maxVol);

        if (height[i] < height[j]) {
            i++;
        } else if (height[i] > height[j]) {
            j--;
        } else {
            j--;
            i++;
        }
    }

    cout << maxVol << endl;

    return 0;
}
