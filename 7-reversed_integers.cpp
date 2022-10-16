#include <unordered_map>
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <limits.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        
    if (x > pow(2, 31) - 1)
        return 0;
    if (x <= -pow(2, 31))
        return 0;

    int flag = x > 0 ? 1 : -1;
        
    x = x > 0 ? x : -x;

    int y = 0;
    int rem, quo;

    quo = x / 10;
    rem = x % 10;

    while (quo > 0)
    {

        if (y > INT_MAX/10|| y < INT_MIN/10)
            return 0;
        y = y * 10 + flag * rem;
        x = quo;

        quo = x / 10;
        rem = x % 10;
    }

    if (y > INT_MAX/10|| y < INT_MIN/10)
        return 0;
    y = (y * 10 + flag * rem);

    return y;
        
    }
};