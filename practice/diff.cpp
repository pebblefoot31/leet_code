#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    //basically finding symmetric difference of two arrays in comparison
    //with each other
    std::vector<int> num1 = {1,2,3};
    std::vector<int> num2 = {3,4,6};
    std::vector<std::vector<int>> ans(2);

    std::vector<int>::iterator seeker;

    if ((num1.size() > 0) && (num2.size() > 0)) {

        std::cout << "here." << std::endl;
        for (int i = 0; i < num1.size(); i++) {

            seeker = std::find(num2.begin(), num2.end(), num1[i]);

            //not found
            if (seeker == num2.end()) {
                std::cout << "pushing back: " << num1[i] << " to ans[0]." << std::endl;
                ans[0].push_back(num1[i]);
            }
        }

        //searching for values from num2 not in num1
        for (int j = 0; j < num2.size(); j++) {

            seeker = std::find(num1.begin(), num1.end(), num2[j]);

            //not found
            if (seeker == num1.end()) {

                std::cout << "pushing back: " << num2[j] << " to ans[1]" << std::endl;
                ans[1].push_back(num2[j]);
            }
        }
    }

    for (int k = 0; k < ans.size(); k++) {

        for (int l = 0; l < ans[k].size(); l++) {

            std::cout << ans[k][l] << " ";
        }

        std::cout << std::endl;
    }

    //loop through array num1
    //check if the current val in num1 is present in num2 (find)
    //if its not present in num2 AND answer[0], add to answer[0]
    //otherwise move on and repeat until you have gone through every val
    //in num1
    
    //repeat for num2

    return 0;
}
