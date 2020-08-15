#include<stdio.h>
#define number 600851475143
int main()
{
	long long num = 0;
	int maxPrime = 0, oodPrime = 3; // จำนวนเฉพาะ
	num = number;
	printf("num =  %d \n ", num);

	while (num % 2 == 0)
	{
		maxPrime = 2;
		num = num / 2;
	}
	printf("maxPrime = %d \t number /= %d  \n", maxPrime, number);
	






	return 0;
}