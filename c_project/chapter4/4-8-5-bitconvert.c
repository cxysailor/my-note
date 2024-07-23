/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 4-8-5-bitconvert.c
#   Last Modified : 2024-03-20 21:30
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

int main(void)
{
	float download_rate;
	float file_size;

	printf("Enter download rate(in Mb/s): ");
	scanf("%f", &download_rate);
	printf("Enter file's size(in MB): ");
	scanf("%f", &file_size);
	printf("At %.2f megabits per second,a file of %.2f megabytes\n", download_rate, file_size);
	printf("downloads in %.2f seconds.\n", file_size * 8 / download_rate);

	return 0;
}
