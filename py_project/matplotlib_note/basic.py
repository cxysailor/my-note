#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : basic.py
#   Last Modified : 2024-07-12 17:55
#   Describe      :
#
# ====================================================
import random
import matplotlib.pyplot as plt
from matplotlib import font_manager

#  让matplotlib显示中文
my_font = font_manager.FontProperties(
    fname="/usr/share/fonts/google-noto-cjk/NotoSansCJK-Regular.ttc"
)
#  随机数种子
random.seed(100)
#  x轴和y轴的数据
x_data = list(range(120))
y_data = [random.randint(20, 35) for _ in range(120)]
#  图形的尺寸和分辨率
plt.figure(figsize=(20, 8), dpi=80)
#  绘制图形
plt.plot(x_data, y_data)
#  x轴的刻度
x_tick = [f"10点{i}分" for i in range(60)]
x_tick += [f"11点{i}分" for i in range(60)]
plt.xticks(
    ticks=x_data[::2],
    labels=x_tick[::2],
    rotation=45,
    fontproperties=my_font
)
#  图形的标题
plt.title(label="Temperature Per Minute(10点到12点之间每分钟温度曲线)",
          fontproperties=my_font)
#  x轴和y轴的标签
plt.xlabel(xlabel="Time(时间)", fontproperties=my_font)
plt.ylabel(ylabel="Temperature(温度)", fontproperties=my_font)
plt.show()
