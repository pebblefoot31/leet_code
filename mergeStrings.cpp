#include <iostream>
#include <string>

int main () {
    
    std::string word1 = "Orange";
    std::string word2 = "Sun";
    std::string combo = "";

    int length1 = word1.length();
    int length2 = word2.length();

    if (length1 == length2) {
    
        for (int i = 0; i < length1; i++) {

                combo += word1[i];
                combo += word2[i];
        }

    } else if (length1 < length2) {
        
        for (int i = 0; i < length1; i++) {

                combo += word1[i];
                combo += word2[i];
        }

        for (int j = length1; j < length2; j++) {

            combo += word2[j];
        }

    } else {

        for (int i = 0; i < length2; i++) {

                combo += word1[i];
                combo += word2[i];
        }

        for (int j = length2; j < length1; j++) {

            combo += word1[j];
        }

    }

    std::cout << "1: " << word1 << std::endl;
    std::cout << "2: " << word2 << std::endl;
    std::cout << "combo: " << combo << std::endl;
    

    return 0;
}
