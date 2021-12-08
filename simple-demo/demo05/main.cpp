#include <mydll.h>
#include <iostream>
int main()
{
    std::cout << add(1, 2) << std::endl;
    std::cout << add(1, 2, 3) << std::endl;

    return 0;
}