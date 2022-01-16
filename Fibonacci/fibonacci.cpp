//
// Created by Dawid Stasiak on 16/01/2022.
//

#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
    std::vector<int> tab;
    tab.push_back(0);
    tab.push_back(1);

    std::cout << 0 << std::endl << 1 << std::endl;

    for (int i = 2; i < 47; i++) {
         tab.push_back(tab.at(i - 1) + tab.at(i -2));
         std::cout << tab.at(i) << std::endl;
    }
}