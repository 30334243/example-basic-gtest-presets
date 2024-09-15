#include <iostream>
#include "my_math.h"

int main() {
    std::cout << "3 + 4 = " << MyMath::add(3, 4) << std::endl;
    std::cout << "10 - 5 = " << MyMath::subtract(10, 5) << std::endl;
    return 0;
}