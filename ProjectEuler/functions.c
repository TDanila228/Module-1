#include "euler1.h"
#include "functions.h"
#include <stdbool.h>
#include <math.h>

bool IsPrime(unsigned long long number)
{
    for (unsigned long long i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}

int IsPalindrome(int number_)
{
    int temp_number_ = number_;
    int reverse_number_ = 0;

    while (number_ > 0)
    {
        int digit_ = number_ % 10;
        reverse_number_ = reverse_number_ * 10 + digit_;
        number_ /= 10;
    }

    return temp_number_ == reverse_number_;
}
