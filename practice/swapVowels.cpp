#include <iostream>
#include <string>
#include <cctype>

int main() {

    std::string s = "Ice crEam"; 
    std::cout << "before: " << s << std::endl;

    int start_s = 0;
    int end_s = s.length() - 1;
    bool atvowel1 = false;
    bool atvowel2 = false;

    while (start_s < end_s) {

       if (tolower(s[start_s]) == 'a'|| tolower(s[start_s]) == 'e'|| tolower(s[start_s]) == 'i' || tolower(s[start_s]) == 'o' || tolower(s[start_s]) == 'u') {
           std::cout << "starts: vowel: " << s[start_s] << std::endl;
           atvowel1 = true;
       } else {

           start_s++;
       }

       if (tolower(s[end_s]) == 'a'|| tolower(s[end_s]) == 'e'|| tolower(s[end_s]) == 'i' || tolower(s[end_s]) == 'o' || tolower(s[end_s]) == 'u') {
           std::cout << "ends: vowel: " << s[end_s] << std::endl;
           atvowel2 = true;
       } else {
           end_s--;
       }

        //swapping characters
        if (atvowel1 && atvowel2) {

            std::cout << "swapping: " << s[start_s] << " and " << s[end_s] << std::endl;
            char swapping;
            swapping = s[start_s];
            s[start_s] = s[end_s];
            s[end_s] = swapping;

            start_s++;
            end_s--;

            atvowel1 = false;
            atvowel2 = false;
        }
            
    }

    std::cout << "swapped: " << s << std::endl;



    return 0;
}
