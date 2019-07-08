#include <iostream>

int main() {
    int a, b, x;
    std::cin >> a;
    std::cin >> b;
    std::cin >> x;
    if (a <= x <= b) {
        std::cout << "DA" << std::endl;
    }else {
        std::cout << "NU" << std::endl;
    }
    // switch (a <= x <= b) {
    //     case true:
    //         std::cout << "DA" << std::endl;
    //         break;
    //     case false:
    //         std::cout << "NU" << std::endl;
    //         break;
    // }
}