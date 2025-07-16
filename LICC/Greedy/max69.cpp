#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    
    vector<int> digits;
    int num = 9669;
    bool changed = false;
    int ans = 0;

    while (num >= 1) {
        digits.push_back(num%10);
        num = (num -(num %10))/ 10;
    }

    for (int i = digits.size()-1; i >= 0; i--) {
        
        if (digits[i] == 6 && !changed) {
            digits[i] = 9;
            changed = true;
        }
        ans += digits[i] * pow(10,i);
    }

    cout << num << endl;
    cout << ans << endl;
    return 0;
}


