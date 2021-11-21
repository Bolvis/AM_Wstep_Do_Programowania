//
// Created by Dawid Stasiak on 21/11/2021.
//
#include <iostream>

static double TAX_THRESHOLD_ONE = 85528.0;
static double TAX_THRESHOLD_TWO = 1000000.0;

int main() {
    double salary_gross = 0.0;
    double salary_net = 0.0;

    std::cout << "Salary gross -> ";
    std::cin >> salary_gross;

    if (salary_gross < TAX_THRESHOLD_ONE) {
        salary_net = salary_gross  * 0.83;
    }
    else {
        salary_net = salary_gross - (TAX_THRESHOLD_ONE * 0.17);
    }

    if (salary_gross > TAX_THRESHOLD_ONE) {
        salary_net -= (salary_gross - TAX_THRESHOLD_ONE) * 0.32;
    }

    if (salary_gross > TAX_THRESHOLD_TWO) {
        salary_net -= (salary_gross - TAX_THRESHOLD_TWO) * 0.04;
    }

    std::cout << "Salary net : " << salary_net << std::endl;
    std::cout << "Tax : " << salary_gross - salary_net << std::endl;

    return 0;
}
