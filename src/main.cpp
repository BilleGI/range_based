#include <iostream>
#include "print.h"
#include <array>

int main()
{
    Print g{1,2,3,4,5};
    g.printArr();

    std::initializer_list<int> list{1,2,3,4,5};

    std::list<int> arr(list);
    for(const auto &it : arr)
        std::cout << "Element list: " << it << std::endl;

    return 0;
}
