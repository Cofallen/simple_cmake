#include "main.h"
#include "test1.h"
#include "test2.h"
#include "test3.h"

#include <iostream>

int main(int argc, char const *argv[])
{
    int m = 5, n = 7;
    std::cout << "5 + 7 =" << add(m, n) << std::endl;
    std::cout << "5 * 7 =" << multiply(m, n) << std::endl;
    return 0;
}
