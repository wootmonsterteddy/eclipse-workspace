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
	unsigned int randLimit = 1000;
	unsigned int amount = rand() % randLimit;

	FILE *output = fopen("sort.txt","w");

	for(int i = 0; i < amount; i++)
	{
		unsigned int r = rand() % randLimit;
		if(i < amount - 1)
		{
			fprintf(output,"%u\n",r);
		}
		else if(i == amount - 1)
		{
			fprintf(output,"%u",r);
		}
	}
	fclose(output);
	printf("File prepared, proceed?\n");
	getchar();

	//Begin sort
		//Move to array

	output = fopen("sort.txt","r+");
	char buffer[256] = {0};
	unsigned int tempArray[10][amount];
	unsigned int ceiling = amount - 1;

	while((fgets(buffer,255,output)) != EOF)
	{
		tempArray[]
	}





	return 0;
}
