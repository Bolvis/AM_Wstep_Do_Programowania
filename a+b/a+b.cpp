//
// Created by Dawid Stasiak on 21/11/2021.
//
#include <iostream>

int getNumber(){
    int num;
    std::cin>>num;
    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
        std::cin >> num;
    }
    return num;
}

int main() {
    long int a;
    long int b;
    a = getNumber();
    b = getNumber();
    std::cout << a + b;
}
