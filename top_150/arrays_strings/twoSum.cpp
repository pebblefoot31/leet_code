#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> numbers = {2,7,11,15};
    int target = 9;
    int i = 0;
    int j = 1;
    int sum = 0;
    vector<int>ans;
    
    while (j < numbers.size()) {
        sum = numbers[i] + numbers[j];
        if (sum == target) {
            ans.push_back(i+1);
            ans.push_back(j+1);
            break;
        } else if (sum > target) {
            i--;
        } else {
            i++;
            j++;
        }
    }

    return 0;
}
