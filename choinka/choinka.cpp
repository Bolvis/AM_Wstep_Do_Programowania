//
// Created by Dawid Stasiak on 16/01/2022.
//
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
    int count;
    std::cin >> count;
    int width;
    std::cin >> width;

    std::vector<std::string> tab;

    int rowsCount = 0;
    for (int i = 0; i < count; i++){
        rowsCount = 0;
        for (int j = 1; j <= width; j += 2) {
            tab.push_back(std::string(j, '*'));
            rowsCount++;
        }
    }

    int starsCount = 1;
    for (int i = 0; i < tab.size(); i++){
        if (i % rowsCount == 0) { starsCount = 1; }
        std::cout << std::string((width - starsCount)/2, ' ');
        std::cout << tab.at(i) << std::endl;
        starsCount+=2;
    }
}
