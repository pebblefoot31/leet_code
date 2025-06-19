#include <iostream>
#include <vector>
using namespace std;

int main() {

    string s = "MCMXCIV";
    //string s = "IV";
    vector<int> nums(s.size());
    int sum = 0;

    for (int i = 0; i < s.size(); i++) {
        
        switch (s[i]) {
            case 'I': 
                nums[i] = 1;
                break;
            case 'V':
                nums[i] = 5;
                break;
            case 'X':
                nums[i] = 10;
                break;
            case 'L':
                nums[i] = 50;
                break;
            case 'C':
                nums[i] = 100;
                break;
            case 'D':
                nums[i] = 500;
                break;
            case 'M':
                nums[i] = 1000;
                break;
        }
    }

    for (int j = 0; j < nums.size();) {
        if (j < nums.size()-1 && nums[j] < nums[j+1]) {
            sum += (nums[j+1]-nums[j]);
            j+=2;
        } else {
            sum += nums[j];
            j++;
        }
    }

    cout << sum << endl;
    return 0;
}
