#include <iostream>
#include <vector>

int main() {

    std::vector<int> flowerbed = {1,0,0,1,0};
    int cont_zeros = 0;
    int can_plant = 0;
    bool full = true;
    bool empty = true;

    for (int l = 0; l < flowerbed.size(); l++) {

        if (flowerbed[l] == 0) {
            full = false;
        }

        if (flowerbed[l] == 1) {
            empty = false;
        }
    }

    if (!full) {

        for (int i = 0; i < flowerbed.size(); i++) {

            if (flowerbed[i] == 0) {
                cont_zeros++;

            } else {
                cont_zeros = 0;
            }

            if (cont_zeros >= 2) {

                can_plant = cont_zeros/2;
                
            }

        }

    } else {

        std::cout << "full." << std::endl;
    }

    if (empty) {
        
        if ((flowerbed.size() % 2) != 0) {
            can_plant = (flowerbed.size()/2) + 1;
        } else {
            can_plant = (flowerbed.size()/2);
        }

    }

    for (int j = 0; j < flowerbed.size(); j++) {

        std::cout << flowerbed[j] << " ";
    }

    std::cout << std::endl;

    std::cout << "Can plant " << can_plant << " flowers in this flowerbed." << std::endl;

    return 0;
}
