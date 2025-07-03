#include <iostream>
#include <vector>
#include <deque>
#include <math.h>
using namespace std;

int main() {

    //int num = 3749;
    int num = 1994;
    vector<int>vals;
    deque<char> ans;
    string final_ans = "";
    int exp = 0;
    int curr;
    int sum;
    int i = 0;
    int v = 0;
    int x = 0;
    int l = 0;
    int c = 0;
    int d = 0;
    int m = 0;

    while (num >= 1) {

       curr = (num % 10)*pow(10,exp);
       vals.push_back(curr);
       num = (num - (num%10))/10;
       exp++;

       sum = 0;

        if (curr == 4) {
             ans.push_front('V');
             ans.push_front('I');
             continue;
        }
        else if (curr == 9) {
             ans.push_front('X');
             ans.push_front('I');
             continue;
        }
        else if (curr == 40) {
             ans.push_front('L');
             ans.push_front('X');
             continue;
        }
        else if (curr == 90) {
             ans.push_front('C');
             ans.push_front('X');
             continue;
        }
        else if (curr == 400) {
             ans.push_front('D');
             ans.push_front('C');
             continue;
        }
        else if (curr == 900) {
             ans.push_front('M');
             ans.push_front('C');
             continue;
        } else {

        while (sum != curr) {

            i++;
            sum++;

            if (i == 5) {
               v += 1; 
               i = 0;
            }

            if (v == 2) {
               x += 1; 
               v = 0;
            }

            if (x == 5) {
               l += 1; 
               x = 0;
            }

            if (l == 2) {
               c += 1; 
               l = 0;
            }

            if (c == 5) {
               d += 1; 
               c = 0;
            }
            
            if (d == 2) {
               m += 1; 
               d = 0;
            }
        }

        for (int k = 0; k < i; k++) {
            ans.push_front('I');
        }

        for (int k = 0; k < v; k++) {
            ans.push_front('V');
        }

        for (int k = 0; k < x; k++) {
            ans.push_front('X');
        }

        for (int k = 0; k < l; k++) {
            ans.push_front('L');
        }

        for (int k = 0; k < c; k++) {
            ans.push_front('C');
        }

        for (int k = 0; k < d; k++) {
            ans.push_front('D');
        }

        for (int k = 0; k < m; k++) {
            ans.push_front('M');
        }

        i = 0; 
        v = 0;
        x = 0;
        l = 0;
        c = 0;
        d = 0;
        m = 0;

      }

    }

    while (!ans.empty()) {
        final_ans.push_back(ans.front());
        ans.pop_front();
    }
    cout << final_ans << endl;


    return 0;
}

