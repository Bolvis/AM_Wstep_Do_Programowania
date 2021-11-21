//
// Created by Dawid Stasiak on 21/11/2021.
//
#include <iostream>

int main() {
    int age;
    std::cout << "Podaj wiek -> ";
    std::cin >> age;
    std::cout << (age < 18 ? "Nie możesz kupić alkohlou" : "Możesz kupić alkohol") << std::endl;
    return 0;
}