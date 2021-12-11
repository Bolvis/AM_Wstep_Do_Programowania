//
// Created by Dawid Stasiak on 04/12/2021.
//
#include <iostream>

int main() {
    for (int i = 1; i < 100; i++)
        std::cout << (i % 3 == 0 ? "Fizz" : "") << (i % 5 == 0 ? "Buzz" : "") << (i % 3 == 0  || i % 5 ==0 ? "\n" : "");
}
