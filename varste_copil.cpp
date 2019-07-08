#include <iostream>

int main() {
    int a, b;
	std::cin >> a;
    std::cin >> b;
    if (a > b) {
  		std::cout << "Primul copil este mai mare cu " << a-b << " ani" << std::endl;
    }else if (a == b){
        std::cout << "Copiii au varste egale" << std::endl;
    }else {
    	std::cout << "Al doilea copil este mai mare cu " << b-a << " ani" << std::endl;
    }
}