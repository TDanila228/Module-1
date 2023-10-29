#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define SIZE 2



int main()
{
	/*unsigned long long Problem_1(const unsigned int value_, const int* multiplies_, const unsigned int size_);
	int value = 0;
	int array[SIZE];

	printf("value = ");
	scanf_s("%d", &value, sizeof(value));

	printf("array = ");
	for (unsigned int i = 0; i < SIZE; ++i)
		scanf_s("%d", &array[i], sizeof(array[i]));

	printf("answer = %llu\n", Problem_1(value, array, SIZE));*/
	
	/*int value_;
	printf("value = ");
	scanf_s("%d", &value_);
	printf("%d", Problem_2(value_));*/

	/*unsigned long long value;
	scanf_s("%llu", &value);
	printf("%llu", Problem_3(value));*/

	/*int larPal_ = Promlem_4();
	printf("Largest palindrome obtained by multiplying two-digit numbers: %d\n", larPal_);*/

	int value;
	printf("value = ");
	scanf_s("%d", &value);
	printf("%d", Problem_5(value));


	return 0;
}