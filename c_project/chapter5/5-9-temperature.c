/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 5-9-temperature.c
#   Last Modified : 2024-03-23 19:44
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

void temperature(double fah);

int main(void)
{
	double temp;

	printf("Enter a fahrenheit temperature: ");
	while (scanf("%lf", &temp) == 1)
	{
		temperature(temp);
		printf("Enter a fahrenheit temperature(q to quit): ");	
	}
	printf("Done!\n");

	return 0;
}

void temperature(double fah)
{
	double cel;
	double kel;
	const double RATE = 5.0 / 9.0; /* 华氏度转摄氏度的系数 */
	const double CONSTANT = 32.0; /* 华氏度装摄氏度的固定值 */
	const double C_TO_K = 273.15; /* 摄氏度转开氏度的固定值 */

	cel = RATE * (fah - CONSTANT);
	kel = cel + C_TO_K;
	printf("Fahrenheit = %.2lf; Celcius = %.2lf; Kelvin = %.2f.\n", fah, cel, kel);
}
