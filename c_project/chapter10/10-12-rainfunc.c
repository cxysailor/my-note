/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 10-12-rainfunc.c
#   Last Modified : 2024-05-13 22:42
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define MONTHS 12
# define YEARS 5

float year_rainfall(const float rain[][MONTHS], int n);
float average_year(float total);
void average_month(const float rain[][MONTHS], int n);

int main(void)
{
	const float rain[YEARS][MONTHS] = 
	{
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
	};
	float total;

	total = year_rainfall(rain, MONTHS);
	printf("\nThe yearly average is %.1f inches.\n\n", average_year(total));
	average_month(rain, MONTHS);
	printf("\n");

	return 0;
}
/** 计算每年的降水量 */
float year_rainfall(const float rain[][MONTHS], int n)
{
	int year;
	int month;
	float subtot;
	float total;

	printf(" YEAR    RAINFALL  (inches)\n");
	for (year = 0, total = 0; year < YEARS; year++)
	{
		for (month = 0, subtot = 0; month < MONTHS; month++)
			subtot += *(*(rain + year) + month);
		printf("%5d %15.1f\n", 2010 + year, subtot);
		total += subtot;
	}
	return total;
}
/** 计算年平均降水量 */
float average_year(float total)
{
	return total / YEARS;
}
/** 计算月平均降水量 */
void average_month(const float rain[][MONTHS], int n)
{
	int year;
	int month;
	float subtot;

	printf("MONTHLY AVERAGE:\n\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
	printf(" Nov  Dec\n");
	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, subtot = 0; year < YEARS; year++)
			subtot += *(*(rain + year) + month);
		printf("%4.1f ", subtot / YEARS);
	}
}
