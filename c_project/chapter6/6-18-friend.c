/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 6-18-friend.c
#   Last Modified : 2024-04-01 14:01
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	const int DUN_NUM = 150; /** 邓巴数 */
	int friends = 5; /** 原始的朋友数 */
	int weeks = 0;

	while (friends <= DUN_NUM)
	{
		weeks++;
		friends = (friends - 2) * 2; /** 每周结束时的朋友数 */
		printf("At weekend %d: Rabnud has %4d friends.\n", weeks, friends);
	}

	return 0;
}
