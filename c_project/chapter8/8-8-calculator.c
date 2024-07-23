/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 8-8-calculator.c
#   Last Modified : 2024-04-24 19:56
#   Describe      : 
#
# ====================================================*/

# include <ctype.h>
# include <stdio.h>

float add(float augend, float addend);
float subtract(float minuend, float subtrahend);
float multiply(float multiplicand, float multiplier);
float divide(float dividend, float divisor);
char get_choice(void);
char get_first(void);
float get_float(void);

int main(void)
{
	char choice;
	float num1;
	float num2;

	while ((choice = get_choice()) != 'q')
	{
		printf("Enter first number: ");
		num1 = get_float();
		printf("Enter second number: ");
		num2 = get_float();
		switch (choice)
		{
			case 'a':
				printf("%.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
				break;
			case 's':
				printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
				break;
			case 'm':
				printf("%.2f x %.2f = %.2f\n", num1, num2, multiply(num1, num2));
				break;
			case 'd':
				while (0 == num2)
				{
					printf("Enter a number other than 0: ");
					scanf("%f", &num2);
				}
				printf("%.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
				break;
		}
	}
	printf("Bye.\n");

	return 0;
}
/** 加法运算 */
float add(float augend, float addend)
{
	return augend + addend;
}
/** 减法运算 */
float subtract(float minuend, float subtrahend)
{
	return minuend - subtrahend;
}
/** 乘法运算 */
float multiply(float multiplicand, float multiplier)
{
	return multiplicand * multiplier;
}
/** 除法运算 */
float divide(float dividend, float divisor)
{
	return dividend / divisor;
}
/** 选择菜单 */
char get_choice(void)
{
	int ch;

	printf("Enter the operation of your choice:\n");
	printf("a. add               s. subtract\n");
	printf("m. multiply          d. divide\n");
	printf("q. quit\n");
	ch = get_first();
	while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("Please respond with a,s,m,d or q.\n");
		ch = get_first();
	}

	return ch;
}
/** 选择首字符 */
char get_first(void)
{
	int ch;

	/** 跳过第一个换行符'\n' */
	do {
		ch = getchar();
	} while (isspace(ch));
	/** 跳过输入行的其他字符，即只保留第一个读取的字符 */
	while (getchar() != '\n')
		continue;
	/** 如果是大写字符，则转换为小写字母 */
	if (isupper(ch))
		ch = tolower(ch);

	return ch;
}
/** 获取输入的数字 */
float get_float(void)
{
	float input;
	char ch;

	while (scanf("%f", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an number\nPlease enter a number, ");
		printf("such as 2.5, -1.78E8, or 3: ");
	}

	return input;
}
