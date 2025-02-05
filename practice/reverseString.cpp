#include <iostream>
#include <string>

int main() {

    std::string s = "hello";
    int i = 0; 
    int j = s.size() - 1;
    char tmp;

    std::cout << s << std::endl;
    while (i < j) {

        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;

        i++;
        j--;
    }
    std::cout << s << std::endl;


    return 0;
}
