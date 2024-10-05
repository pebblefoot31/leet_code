#include <iostream>
#include <vector>

int main() {

    //std::vector<int> gain = {-5, 1,5,0,-7};
    std::vector<int> gain = {-4, -3,-2,-1, 4, 3,2};
    int net_gain;
    int max_alt = 0;
    int point = 0;

    if (gain.size() >= 1 || gain.size() <= 100) {

        for (int g = 0; g < gain.size(); g++) {
            
            std::cout << "here, g is " << g << std::endl;
            net_gain += gain[g];

            if (net_gain > max_alt) {
                max_alt = net_gain;
                point = g;
            }

        }
    }

    std::cout << "the max elevation is " << max_alt << std::endl;
    

    return 0;
}
