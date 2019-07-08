// printTime.cpp
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t t = time(0);
    tm * now = localtime(&t);
    cout << (now -> tm_year + 1900) << '-' << (now -> tm_mon + 1) << '-' << now->tm_mday << "\n";
    cout << (now->tm_hour) << " : " << (now->tm_min) << "\n";

    return 0;
}