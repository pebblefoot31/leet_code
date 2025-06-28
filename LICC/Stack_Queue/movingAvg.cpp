#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

    queue<int> vals;
    int avg = 0;
    int sum = 0;
    int num = 1;

    while (num <= 10) {

        if (vals.size() < 3) {
            vals.push(num);
            sum += num;
        } else {
            sum -= vals.front();
            vals.pop();
            vals.push(num);
        }

        if (sum <= 0) {
            break;
        }

        cout << sum << endl;
        avg = sum/vals.size(); 
        cout << avg << endl;
        num++;

    }

    
}
