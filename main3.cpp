#include <iostream>

int main() {
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    double* a = new double[n];

    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> *(a + i);
    }

    int count = 0;
    double product = 1;

    std::cout << "Indexes of elements < 1: ";
    for (int i = 0; i < n; i++) {
        if (*(a + i) < 1) {
            count++;
            product *= *(a + i);
            std::cout << i << " ";
        }
    }

    std::cout << "\nCount: " << count << std::endl;
    std::cout << "Product: " << (count > 0 ? product : 0) << std::endl;

    delete[] a;

    return 0;
}
