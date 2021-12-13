#include <iostream>

int main()
{
    int x = 5;
    int y = ++x;
    int z = x++;

    std::cout << y << " " << x << " " << z;
    return 0;
}