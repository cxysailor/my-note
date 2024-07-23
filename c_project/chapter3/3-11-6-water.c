/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 3-11-6-water.c
#   Last Modified : 2024-03-19 22:20
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# define MASS_OF_WATERMOLECULE 3.0e-23f
# define GRAM_PER_QUART 950.0f

int main(void)
{
	float molecules;
	float quart;

	printf("Enter water in quart: ");
	scanf("%f", &quart);
	molecules = quart * GRAM_PER_QUART / MASS_OF_WATERMOLECULE;
	printf("quart = %f\n", quart);
	printf("%f quarts of water contain %e of molecules\n", quart, molecules);

	return 0;
}
