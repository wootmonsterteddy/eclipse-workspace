/*
 * collatz.c
 *
 *  Created on: 24 okt. 2017
 *      Author: Erik
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <strings.h>
#include <string.h>
#include <math.h>

int main(void)
{
	FILE *outputFile = fopen("collatz.txt","w");
	if(outputFile == NULL)
	{
		printf("File could not be opened.\n");
		return 1;
	}

	unsigned long limit = 1000000;
	for(unsigned long number = 1; number <= limit; ++number)
	{
		unsigned long temp = number;
		unsigned int counter = 0;

		while(temp != 1)
		{
			if(temp%2 == 0)
			{
				temp /= 2;
			}
			else
			{
				temp = temp*3 + 1;
			}
			counter++;
		}
		fprintf(outputFile,"%lu %u\n",number,counter);
	}

	fclose(outputFile);

	return 0;
}
