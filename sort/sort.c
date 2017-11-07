/*
 * sort.c
 *
 *  Created on: 5 nov. 2017
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

int main(void)
{
	//Prepare random integers
	srand(time(NULL));
	unsigned long randLimit = 100000;
	unsigned long amount = rand() % randLimit;

	FILE *output = fopen("sort.txt","w");

	for(unsigned long i = 0; i < amount; i++)
	{
		unsigned long r = rand() % randLimit;
		if(i < amount - 1)
		{
			fprintf(output,"%lu\n",r);
		}
		else if(i == amount - 1)
		{
			fprintf(output,"%lu",r);
		}
	}
	fclose(output);
	printf("File prepared, proceed?\n");
	getchar();

	//Begin sort
	output = fopen("sort.txt","r");
	char buffer[256] = {0};
	unsigned long tempArray[amount];
	unsigned long ceiling = amount, i = 0;

	//Move to array
	while((fgets(buffer,255,output)) != NULL)
	{
		tempArray[i] = atoi(buffer);
		i++;
	}

	fclose(output);

	//Sort array
	while(ceiling > 1)
	{
		unsigned long current = tempArray[0], pos = 0;
		for(i = 1; i < ceiling; i++)
		{
			if(current < tempArray[i])
			{
				current = tempArray[i];
				pos = i;
			}
			if(i == ceiling - 1)
			{
				tempArray[pos] = tempArray[ceiling-1];
				tempArray[ceiling-1] = current;
			}
		}
		ceiling--;
	}

	//Write array to original file
	output = fopen("sort.txt","w");
	for(i = 0; i < amount; i++)
	{
		if(i < amount - 1)
		{
			fprintf(output,"%lu\n",tempArray[i]);
		}
		else if(i == amount - 1)
		{
			fprintf(output,"%lu",tempArray[i]);
		}
	}

	fclose(output);

	printf("Done.\n");
	getchar();

	return 0;
}
