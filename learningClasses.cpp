// learning how classes work in c++
#include <iostream>

class Test
{
    int var = 0; 
    public:
        Test (int a) { var = a;}  // __init__ in python
        Test () { std::cout << " da";}
        ~Test() { delete &var;};
        void print() { std::cout << var << std::endl; }
        void setvar(int a);
};

void Test::setvar(int a) { var = a; } 

int main()
{
    Test testNume(2);
    testNume.print();

    delete &testNume;
    testNume.setvar(11);
    testNume.print();

    std::cout << typeid(testNume).name();

    return 0;
}