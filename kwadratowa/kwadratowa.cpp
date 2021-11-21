//
// Created by Dawid Stasiak on 21/11/2021.
//
#include <iostream>
#include <cmath>
#include <iomanip>

float * kwadratowa(float a, float b, float c);
float getNumber();

int main(){
    float a,b,c;

    do {
        a = getNumber();
    } while (a == 0);

    b = getNumber();
    c = getNumber();

    float * r = kwadratowa(a,b,c);
    if(r[3] == 1){
        std::cout << std::setprecision(1) << std::fixed;
        if (r[0] == 0){
            std::cout << r[1];
        } else {
            std::cout  << r[1] << " " << r[2];
        }
    } else {
        std::cout << "BRAK";
    }

    return 0;
}

float * kwadratowa(float a, float b, float c){
    static float r[4];
    float delta = powf(b,2) + (-4*a*c);
    r[0] = delta;
    if(delta >= 0){
        r[1] = ((-1 * b) - sqrtf(delta)) / (2*a);
        r[2] = ((-1 * b) + sqrtf(delta)) / (2*a);
        r[3] = 1;
    }
    return r;
}

float getNumber(){
    float num;
    std::cin>>num;
    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
        std::cin >> num;
    }
    return num;
}
