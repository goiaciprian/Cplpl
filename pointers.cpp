#include <iostream>
using namespace std;

// class PointerTest
// {
//     private:
//         int x=1;
//         int y=1;
//     public:
//         PointerTest();
//         PointerTest(int, int);
//         void print();
//         void setter(int a, int b);
// };

// PointerTest::PointerTest() { std::cout << "Test created.\n"; }
// PointerTest::PointerTest(int a, int b) { std::cout << "Test created with a and b.\n"; x=a; y=b; }
// void PointerTest::print() { std::cout << x << " + " << y << std::endl;}
// void PointerTest::setter(int a, int b) { x=a; y=b; }

// int main()
// {
//     int x=1000;
//     int * xP = &x;
//     *xP = 1;
//     std::cout << *xP << std::endl;

//     PointerTest Test, Test2 (12, 100);

//     Test.print();

//     PointerTest * prtTest = &Test2;

//     prtTest->print();

//     return 0;
// }

int main()
{
    int b = 12;
    int *a = new int;
    cout << a << " " << &a;

    return 0;
}