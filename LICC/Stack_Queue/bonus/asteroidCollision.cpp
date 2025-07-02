#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

    vector<int> asteroids = {5,10,-5};
    stack<int> a;

    for (int i = 0; i < asteroids.size(); i++) {

        if (!a.empty()) {
            if ((a.top() < 0 && asteroids[i] > 0) || (a.top() > 0 && asteroids[i] < 0)) {
                a.push(max(abs(asteroids[i]), abs(a.top())));
            } else {
                a.push(asteroids[i]);
            }
        } else {
            a.push(asteroids[i]);
        }
    }

    while (!a.empty()) {
        cout << a.top() << endl;
        a.pop();
    }

    return 0;
}

