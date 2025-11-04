#include <iostream>
#include "addition-cpp.h"
extern "C" void addition() {
    int first_number;
    int second_number;
    std::cout << "Enter First Number\n";
    std::cin >> first_number;
    std::cout << "Enter Second Number\n";
    std::cin >> second_number;
    int calculate;
    calculate = first_number + second_number;
    std::cout << "Total Is" << " " << calculate;
}
