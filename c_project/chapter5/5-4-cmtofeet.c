/* ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : 5-4-cmtofeet.c
#   Last Modified : 2024-03-23 16:01
#   Describe      : 
#
# ====================================================*/

# include <stdio.h>

const float CM_PER_FEET = 30.48; /** 1英尺=30.48厘米 */
const float IN_PER_FEET = 12; /** 1英尺=12英寸 */
int main(void)
{
	float cm; /** 厘米 */
	float ft; /** 英尺 */
	float in; /** 英寸 */

	printf("Enter a height in centimeters: ");
	scanf("%f", &cm);
	while (cm > 0)
	{
		ft = cm / CM_PER_FEET; /** 将厘米转换为英尺 */
		in = (ft - (int)(ft)) * IN_PER_FEET; /** 将英尺的小数部分转换为英寸 */
		printf("%.1f cm = %d feet, %.1f inches\n", cm, (int)(ft), in); /** 将英尺舍去取整 */
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%f", &cm);
	}
	printf("bye\n");

	return 0;
}
