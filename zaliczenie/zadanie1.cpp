//
// Created by Dawid Stasiak on 06/02/2022.
//

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        int temp;
        std::cin >> temp;
        v.push_back(temp);
    }
    std::sort(v.begin(), v.end(), std::greater<int>()); // {6,5,4,3,2,1,0} sorts descending
    std::cout << v[1];
}