/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 2-12-5-countries.c
#   Last Modified : 2024-03-18 09:39
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

void br(void);
void ic(void);

int main(void)
{
	br();
	printf(", ");
	ic();
	ic();
	br();
}

void br(void)
{
	printf("Brazil, Russia");
}

void ic(void)
{
		printf("India, China\n");
}
