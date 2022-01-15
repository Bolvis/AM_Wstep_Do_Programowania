//
// Created by Dawid Stasiak on 11/12/2021.
//
//napisz program, który zawiera funkcję liczenia pola:

//prostokata

//kwadratu

//trapezu

//trójkata

//koła


#include <iostream>
#include <cmath>
#include <vector>

float trapezu(float a, float b, float h){
    return ((a+b)*h)/2;
}

float prostokata(float a, float b){
    return trapezu(a, a, b);
}

float kwadratu(float a){
    return prostokata(a, a);
}

float trojkata(float a, float h){
    return a * h;
}

float kola(float r){
    return M_PI * (r*r);
}

void allElementsSquared(std::vector<int> &table){
    for (int &n: table){
        n = n * n;
    }
}

int main(){
    std::vector<int> nums{3, 4, 2, 8, 15, 267};
    for(int &n: nums){
        std::cout << n << "\t";
    }
    std::cout << std::endl;
    allElementsSquared(nums);
    for(int &n: nums){
        std::cout << n << "\t";
    }
    return 0;
}
