//sumConsImpare.cpp -- PbInfo -- 50;
#include <iostream>
#include <chrono>
using namespace std::chrono;


int main()
{
    int x;
    long long sum=0;

    std::cin >> x;
    // auto start = high_resolution_clock().now();

    // if(std::to_string(x).length() > 8) { return 1; }

    for(int a=1;a<=x;a=a+2)
    {
        sum += a;
        // std::cout << sum << "\n";
    }

    // std::cout << (float)sum << std::endl;

    std::cout << sum;

    // auto stop = high_resolution_clock().now();

    // auto duration = duration_cast<milliseconds>(stop-start);

    // std::cout << "Finished in " << duration.count() << " miliseconds." << std::endl;
    // system("pause");
    return 0;

}