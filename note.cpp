#include <iostream>

int main() {
	int x;
    std::cin >> x;
    switch (x < 5){
    	case true:
            std::cout << "corigent" << std::endl;
            break;
        case false:
            std::cout << "promovat" << std::endl;
            break;
    }
    return 0;
}