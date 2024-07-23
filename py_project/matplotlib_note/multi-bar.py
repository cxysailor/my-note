#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : multi-bar.py
#   Last Modified : 2024-07-13 13:59
#   Describe      :
#
# ====================================================
from matplotlib import pyplot as plt
from matplotlib import font_manager

movies = [
    "星球崛起3：终极之战",
    "敦克尔克",
    "蜘蛛侠：英雄归来",
    "战狼2"
]
box_14 = [2358, 399, 2358, 362]
box_15 = [12357, 156, 2045, 168]
box_16 = [15746, 312, 4497, 319]

#  支持中文的字体
my_font = font_manager.FontProperties(
    fname=r'/usr/share/fonts/google-noto-cjk/NotoSansCJK-Regular.ttc'
)
#  线条宽度
bar_width = 0.2
#  设置图形大小和分辨率
plt.figure(figsize=(20, 8), dpi=80)
#  设置x轴上的偏移量 - 以便放下14日/15日/16日的图形
x_offset_14 = list(range(len(movies)))
x_offset_15 = [i + bar_width for i in x_offset_14]
x_offset_16 = [i + bar_width * 2 for i in x_offset_14]
#  绘制图形
plt.bar(range(len(movies)), box_14, width=bar_width, label='14日')
plt.bar(x_offset_15, box_15, width=bar_width, label='15日')
plt.bar(x_offset_16, box_16, width=bar_width, label='16日')
#  x轴刻度
plt.xticks(x_offset_15, movies, fontproperties=my_font)
#  设置图形的描述信息
#  图例
plt.legend(prop=my_font)
#  标题
plt.title(label='部分电影3天的票房比较', fontproperties=my_font)
#  x,y轴的标签
plt.xlabel(xlabel='电影名称', fontproperties=my_font)
plt.ylabel(ylabel='票房数量', fontproperties=my_font)
#  网格线
plt.grid(alpha=0.3)
plt.show()
