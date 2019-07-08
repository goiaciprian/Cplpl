#include <iostream>

int main()
{
    int l, h, cate, times=0;
    std::cin >> l >> h;

    for(int i = 0; i < h; i++)
    {
        if((cate + l) <= h) {cate += l; times++;}
    }

    std::cout << times << std::endl;

    return 0;
}