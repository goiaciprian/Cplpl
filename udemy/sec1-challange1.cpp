/* UDEMY C++ COURSE -- Section 1 challange

Ask the user for a number betweem 1 and 100 and diplay:
Amazing! That's my favorite number too!
No, seriously that number is my favorite!

*/
#include <iostream>

int main() {
    int number;
    std::cout << "Select an number between 1 and 100: ";
    std::cin >> number;
    std::cout << "Amazing!That's my favorite number too.\n";
    std::cout << "No, seriously, " << number << " is my favorite." << std::endl;
    return 0;
}
