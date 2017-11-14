/*
 * projecteuler.c
 *
 *  Created on: 11 nov. 2017
 *      Author: Erik
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <strings.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#if 0
/* Problem 1
Multiples of 3 and 5
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
 */

int main(void)
{
	unsigned long sum = 0;
	unsigned int i = 1, ceiling = 1000;

	for(i = 1; i < ceiling; i++)
	{
		if(i%3 == 0 || i%5 == 0)
		{
			sum += i;
		}
	}

	printf("%lu",sum);

	return 0;
}

#endif

#if 0
/* Problem 2
Even Fibonacci numbers
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
 */

int main(void)
{
	unsigned long before = 0, now = 1, temp = 0, sum = 0;

	while(now+before < 4000000)
	{
		temp = now;
		now += before;
		before = temp;

		if(now%2 == 0)
		{
			sum += now;
		}
	}

	printf("%lu\n",sum);

	return 0;
}
#endif

#if 0
/* Problem 3
Largest prime factor
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

unsigned long long sum(const unsigned long long *x)
{
	unsigned long long sum = 0;
	while(*x)
	{
		sum += *x;
		x++;
	}
	return sum;
}

int main(void)
{
	unsigned long long factors[1000] = {0}, i = 2, number = 9009;
	unsigned int counter = 0;

	while(sum(factors) < number)
	{
		if(number%i == 0)
		{
			factors[counter] = i;
			number /= i;
			counter++;
		}
		i++;
	}

	for(i = 0; i < counter; i++)
	{
		printf("%llu\n",factors[i]);
	}

	printf("Last = %llu\n",factors[counter-1]);
	getchar();

	return 0;
}

#endif

#if 0
/*Problem 4
Largest palindrome product
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 � 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
bool isPalindrome(const unsigned long original)
{
	bool result = 0;
	unsigned long input = original;
	int length = 0;
	while(input > 1)
	{
		length++;
		input /= 10;
	}
	char temp[length];
	input = original;
	for(int i = 0; i < length; i++)
	{
		temp[i] = input%10 + '0';
		input /= 10;
	}
	if(atol(temp) == original)
	{
		result = 1;
	}
	return result;
}

int main(void)
{
	unsigned long temp[2284] = {0};
	unsigned int counter = 0;

	for(unsigned long i = 100; i < 1000; i++)
	{
		for(unsigned long j = 100; j < 1000; j++)
		{
			if(isPalindrome(i*j) == 1)
			{
				temp[counter] = i*j;
				counter++;
			}
		}
	}

	unsigned long highest = temp[0];

	for(int i = 1; i < counter; i++)
	{
		if(temp[i] > highest)
		{
			highest = temp[i];
		}
	}

	printf("highest = %lu\n",highest);
}

#endif

#if 0
/*Problem 5
Smallest multiple
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int main(void)
{
	int lower = 1, upper = 20;
	unsigned long n = 10;

	while(1)
	{
		for(int i = lower; i <= upper; i++)
		{
			if(n%i != 0)
			{
				break;
			}
			else if(i == upper)
			{
				printf("number is = %lu\n",n);
				return 0;
			}
		}
		n++;
	}

	return 0;
}

#endif

#if 1
/*Problem 6
Sum square difference
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

int main(void)
{


	return 0;
}

#endif
