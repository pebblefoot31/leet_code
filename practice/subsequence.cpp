#include <iostream>
#include <string> 

int main() {

    std::string my_str = "axhybde";
    std::string substr = "axc";
    std::string checker = "";

    int start_substr = 0;

    for (int s = 0; s < my_str.length(); s++) {

        if (my_str[s] == substr[start_substr]) {

            start_substr++;
            checker += my_str[s];

            if (checker == substr) {
                break;
            }
        }
    }

    if (checker == substr) {
        std::cout << "the subsequence " << substr << " is present in " << my_str << " !" << std::endl;
    } else {
        std::cout << "the subsequence " << substr << " is NOT present in " << my_str << " !" << std::endl;
    }


    return 0;
}
