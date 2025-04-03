#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter two integers a and b: ";
    std::cin >> a >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    *ptrA *= 2;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}
