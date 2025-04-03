#include <iostream>

int main() {
    int* ptr1 = new int;
    int* ptr2 = new int;

    std::cout << "Enter two integers: ";
    std::cin >> *ptr1 >> *ptr2;

    *ptr1 /= 2;

    std::cout << "First number after halving: " << *ptr1 << std::endl;
    std::cout << "Second number remains: " << *ptr2 << std::endl;

    delete ptr1;
    delete ptr2;

    return 0;
}
