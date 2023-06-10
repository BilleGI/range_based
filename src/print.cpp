#include "print.h"
#include <iostream>

Print::Print(std::initializer_list<int>&& list) :vec(list){}

void Print::printArr()
{
    qDebug() << "Mean: " <<  vec;
    foreach(const auto& var, vec) // for-each из qt
        std::cout << var << std::endl;
    std::cout << std::endl;
    for(const auto& var:vec) // range-based из 11 стандарта
        std::cout << var << std::endl;
    std::cout << std::endl;
    for(auto it = vec.begin(); it != vec.end(); ++it)
        std::cout << (*it) << std::endl;
}
