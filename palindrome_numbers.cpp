#include "universal_headers.hpp"

int main()
{

   
    int x = 121;

    if (x < 0)
    {
        std::cout<<"The number "<<x<<" is not palindrome"<<std::endl;
    }
    else if (x<10)
    {
        std::cout<<"The number "<<x<<" is palindrome"<<std::endl;
    }
    else
    {
        int dig_num = (int)(log10(x) + 1);
        int hal_num = dig_num % 2 == 0 ? dig_num / 2 : (dig_num - 1) / 2;
        int new_num = 0;

        for (int ii = 0; ii < hal_num; ii++)
        {
            new_num = 10* new_num +x%10;
            x/=10;
        }

        if ( dig_num % 2 == 1)
        {
            x/=10;
        }

        if( new_num == x)
        {
            std::cout<<"The number "<<x<<" is palindrome"<<std::endl;
        }
        else
        {
            std::cout<<"The number "<<x<<" is NOT palindrome"<<std::endl;
        }
    }

    return 0;

}