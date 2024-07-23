/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 4-8-7-floatdouble.c
#   Last Modified : 2024-03-20 22:15
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <float.h>

int main(void)
{
	float fnum = 1.0 / 3.0;
	double dnum = 1.0 / 3.0;

	printf("%f; %.12f; %.16f\n", fnum, fnum, fnum);
	printf("%lf; %.12lf; %.16lf\n", dnum, dnum, dnum);
	printf("FLT_DIG = %f; DBL_DIG = %lf\n", FLT_DIG, DBL_DIG);

	return 0;
}
