/* Sectiunea 7 -- vectors challange

*/

#include <iostream>
#include <vector>
#define nln "\n"

using namespace std;

int main() {

    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << nln << vector1.at(0) << nln << vector1.at(1) << nln << vector1.size() << nln;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << nln << vector2.at(0) << nln << vector2.at(1) << nln << vector2.size() << nln;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << nln << vector_2d.at(0).at(0) << nln << vector_2d.at(0).at(1) << nln << vector_2d.at(1).at(0) << nln << vector_2d.at(1).at(1) << nln;

    vector1.at(0) = 1000;

    cout << nln << vector_2d.at(0).at(0) << nln << vector_2d.at(0).at(1) << nln << vector_2d.at(1).at(0) << nln << vector_2d.at(1).at(1) << nln;

    cout << nln << vector1.at(0) << nln << vector1.at(1) << nln;


    return 0;
}
