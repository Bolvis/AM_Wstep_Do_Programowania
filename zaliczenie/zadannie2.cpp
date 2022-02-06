//
// Created by Dawid Stasiak on 06/02/2022.
//

#include <iostream>

int main(){
    std::string pesel;
    std::cin >> pesel;
    if (pesel[pesel.size() - 2] % 2 == 0) {
        std::cout << "KOBIETA";
    } else {
        std::cout << "MEZCZYZNA";
    }
}