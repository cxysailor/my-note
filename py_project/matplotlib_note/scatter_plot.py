#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : scatter_plot.py
#   Last Modified : 2024-07-13 00:37
#   Describe      :
#
# ====================================================

import matplotlib.pyplot as plt

#  y轴 - 数据 - 3月份和10月份每天的最高气温
mar = [
    11, 17, 16, 11, 12, 11,
    12, 6, 6, 7, 8, 9,
    12, 15, 14, 17, 18, 21,
    16, 17, 20, 14, 15, 15,
    15, 19, 21, 22, 22, 22,
    23
]
oct = [
    26, 26, 28, 19, 21, 17,
    16, 19, 18, 20, 20, 19,
    22, 23, 17, 20, 21, 20,
    22, 15, 11, 15, 5, 13,
    17, 10, 11, 13, 12, 13,
    6
]
#  x轴 - 日期
mar_days = range(1, 32)
oct_days = range(51, 82)
#  设置图形大小和分辨率
plt.figure(figsize=(20, 8), dpi=80)
#  画散点图
plt.scatter(mar_days, mar, label='March')
plt.scatter(oct_days, oct, label='October')
#  设置x轴的刻度
day_list = list(mar_days) + list(oct_days)
x_tick = [f'Mar,{i}' for i in mar_days]
x_tick += [f'Oct,{i - 50}' for i in oct_days]
plt.xticks(ticks=day_list[::3], labels=x_tick[::3], rotation=45)
#  设置描述信息
plt.title(label='Temperature in March and October')  # 图形标题
plt.xlabel(xlabel='Day')  # x轴标签
plt.ylabel(ylabel='Temperature')  # y轴标签
#  设置图例
plt.legend()
#  保存图形为文件
plt.savefig('./scatter1.png')
#  显示图形
#  plt.show()
