#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {

    //string s = "([)]";
    string s = "))";
    bool flag = true;
    stack<char> symbols;

    for (int i = 0; i < s.size(); i++) {
        
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            symbols.push(s[i]);
        } else  {
            if (!symbols.empty()) {
                if (s[i] == '}' && symbols.top() == '{') {
                    symbols.pop();
                } else if (s[i] == ')' && symbols.top() == '(') {
                    symbols.pop();
                } else if (s[i] == ']' && symbols.top() == '[') {
                    symbols.pop();
                }
            } else {
                flag = false;
                break;
            }
        }
    }

    if (symbols.empty() && flag)
       cout << "VALID" << endl; 
    else
       cout << "INVALID" << endl; 
        
    return 0;
}
