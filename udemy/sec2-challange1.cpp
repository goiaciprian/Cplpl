/* sec2-challange-challange1.cpp
*/

#include <iostream>
using namespace std;

int main() {

    int smallRooms {0};
    int bigRooms {0};

    const int priceSmall {25};
    const int priceLarge {35};
    const float tax {0.06};

    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n\n";
    cout << "How many small rooms would you like to clean? ";
    cin >> smallRooms;
    cout << "How many large rooms would you like to clean? ";
    cin >>  bigRooms;

    int cost {(smallRooms*priceSmall) + (bigRooms*priceLarge)};

    cout << "\nEstimate for carpet cleaning service\n";
    cout << "Number of small rooms: " << smallRooms << "\n";
    cout << "Number of large rooms: " << bigRooms << "\n";
    cout << "Price per small room: " << priceSmall << "\n";
    cout << "Price per large room: " << priceLarge << "\n";
    cout << "Cost: " << cost << "\n";
    cout << "Tax: " << cost*tax << "\n";
    cout << "===============================================\n";
    cout << "Total: " << cost+(cost*tax) << "\n";
    cout << "This estimate is valid for 30 days." << endl;

    return 0;
}