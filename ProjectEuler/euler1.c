#include "euler1.h"
#include "functions.h"
#include <stdbool.h>

unsigned long long Problem_1(const unsigned int value_, const int* multiplies_, const unsigned int size_)
{
	unsigned long long sum = 0;

	for (unsigned int number = 0; number < value_; ++number)
	{
		for (unsigned int i = 0; i < size_; ++i)
		{
			if (number % multiplies_[i] == 0)
			{
				sum += number;
				break;
			}
		}
	}

	return sum;
}

unsigned long long Problem_2(value_)
{
	unsigned long long fib1 = 1;
	unsigned long long fib2 = 2;
	unsigned long long sum=2;
	
	while (fib1 < value_ || fib2 < value_)
	{
		fib1 = fib1 + fib2;
		if (fib1 % 2 == 0)
			sum = sum + fib1;
		fib2 = fib1 + fib2;
		if (fib2 % 2 == 0)
			sum = sum + fib2;
	}
	return sum;
}

unsigned long long Problem_3(const unsigned long long value_)
{
	unsigned long long delmax_ = 0;
	unsigned long long del_ = 1;

	while (del_ < value_)
	{
		if (value_ % del_ == 0)
		{
			if (IsPrime(del_) == 1)
			{

				delmax_ = del_;
				printf("%llu\n", delmax_);

			}

		}
		del_ += 1;
	}
	return delmax_;

}

unsigned int Promlem_4(value_)
{
	int larPal_ = 0;

	for (int dig1_ = 999; dig1_ >= 100; dig1_--)
	{
		for (int dig2_ = 999; dig2_ >= 100; dig2_--)
		{
			int result_ = dig1_ * dig2_;

			if (result_ > larPal_ && IsPalindrome(result_))
			{
				larPal_ = result_;
			}
		}
	}

	return larPal_;
}



unsigned long long Problem_5(value)
{
	unsigned long long number = value;
	int i = value;
	while (i > 0)
	{
		if (number % i == 0)
			--i;
		else
			i = value;
		number = number + value;
	}
	return number;
}
