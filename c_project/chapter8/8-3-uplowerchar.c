/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 8-3-uplowerchar.c
#   Last Modified : 2024-04-04 21:33
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>
# include <ctype.h>

int main(void)
{
	int ch;
	int c_up = 0; /** 大写字母的个数 */
	int c_lo = 0; /** 小写字母的个数 */

	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch))
			c_up++;
		else
			c_lo++;
	}
	printf("Lower=%d; Upper=%d\n", c_lo, c_up);

	return 0;
}
