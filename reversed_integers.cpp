#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <limits.h>

using namespace std;
string expand(string &s, int pos_begin, int pos_end);

int main()
{
    int x = 1534236469;
    if (x > INT_MAX)
        std::cout << 0;
    if (x < -pow(2, 31))
        std::cout << 0;

    int flag = x > 0 ? 1 : -1;
    x = x > 0 ? x : -x;

    long int y = 0;
    int rem, quo;

    quo = x / 10;
    rem = x % 10;

    while (quo > 0)
    {

        if (y * 10 + flag * rem > pow(2, 31) - 1 || y * 10 + flag * rem > pow(2, 31) - 1 < -pow(2, 31))
            std::cout << 0 << std::endl;
        y = y * 10 + flag * rem;
        x = quo;

        quo = x / 10;
        rem = x % 10;
    }

    if (y * 10 + flag * rem > pow(2, 31) - 1 || y * 10 + flag * rem > pow(2, 31) - 1 < -pow(2, 31))
        std::cout << 0 << std::endl;
    y = (y * 10 + flag * rem);

    return y;
}
