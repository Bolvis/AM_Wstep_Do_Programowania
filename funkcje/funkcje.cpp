//
// Created by Dawid Stasiak on 11/12/2021.
//
//napisz program, który zawiera funkcję liczenia pola:

//prostokąta

//kwadratu

//trapezu

//trójkąta

//koła


#include <iostream>
#include <cmath>

float trapezu(float a, float b, float h){
    return ((a+b)*h)/2;
}

float prostokąta(float a, float b){
    return trapezu(a, a, b);
}

float kwadratu(float a){
    return prostokąta(a, a);
}

float trójkąta(float a, float h){
    return a * h;
}

float koła(float r){
    return M_PI * (r*r);
}

int main(){

    return 0;
}
