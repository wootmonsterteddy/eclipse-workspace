/*
 * integral.c
 *
 *  Created on: 7 nov. 2017
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

double absolute(double x)
{
	if(x < 0)
	{
		return x*(-1);
	}
	else
	{
		return x;
	}
}

double function(double x)
{
	return x*x*x + 5*x*x - 2*x + 5;
}

int main(void)
{
	double lower = 0, upper = 0, stepSize = 0.00001, i = 0, r = 0;
	char temp[100];

	printf("Lower limit: ");
	fgets(temp,100,stdin);
	lower = atof(temp);
	printf("Upper limit: ");
	fgets(temp,100,stdin);
	upper = atof(temp);
	/*
	printf("Step size: ");
	fgets(temp,100,stdin);
	stepSize = atof(temp);
	*/

	i = lower;
	while(i < upper)
	{
		r = r + absolute(function(i)*stepSize);
		i = i + stepSize;
	}

	printf("\n\nr = %lf\n",r);
	getchar();

	return 0;
}
