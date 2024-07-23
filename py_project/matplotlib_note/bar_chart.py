#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : bar_chart.py
#   Last Modified : 2024-07-13 01:27
#   Describe      :
#
# ====================================================

import matplotlib.pyplot as plt
from matplotlib import font_manager

my_font = font_manager.FontProperties(
    fname='/usr/share/fonts/google-noto-cjk/NotoSansCJK-Regular.ttc'
)

movies = [
    '战狼2',
    '速度与激情8',
    '功夫瑜伽',
    '西游降魔篇',
    '变形金刚5：最后的骑士',
    '摔跤吧！爸爸',
    '加拉比海盗5：死无对证',
    '金刚：骷髅岛',
    '极限特工：终极回归',
    '生化危机6：终章',
    '乘风破浪',
    '神偷奶爸3',
    '智取五虎山',
    '大闹天竺',
    '金刚狼3：殊死一战',
    '蜘蛛侠：英雄归来',
    '悟空传',
    '银河护卫的2',
    '清圣',
    '新木乃伊'
]
box_office = [
    56.01, 26.94, 17.53, 16.49,
    15.45, 12.96, 11.80, 11.61,
    11.28, 11.12, 10.49, 10.30,
    8.75, 7.55, 7.32, 6.99,
    6.88, 6.86, 6.58, 6.23
]
plt.figure(figsize=(20, 10), dpi=80)
plt.barh(range(len(movies)), box_office, height=0.5, color='#7B68EE')
plt.yticks((range(len(movies))), movies, fontproperties=my_font)
plt.grid(alpha=0.3)
plt.show()
