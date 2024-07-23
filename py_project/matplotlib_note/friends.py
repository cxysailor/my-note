#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : friends.py
#   Last Modified : 2024-07-12 22:39
#   Describe      :
#
# ====================================================
import matplotlib.pyplot as plt
from matplotlib import font_manager

my_font = font_manager.FontProperties(
    fname='/usr/share/fonts/google-noto-cjk/NotoSansCJK-Regular.ttc'
)

person_a = [1, 0, 1, 1, 2, 4, 3, 2, 3, 4, 4, 5, 6, 5, 4, 3, 3, 1, 1, 1]
person_b = [1, 0, 3, 1, 2, 2, 3, 3, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1]

ages = list(range(11, 31))

plt.figure(figsize=(20, 8), dpi=80)
plt.plot(ages, person_a, label='杰瑞', color='orange', linestyle=':')
plt.plot(ages, person_b, label='汤姆', color='cyan', linestyle='-.')
plt.legend(prop=my_font, loc='lower right')

x_tick = [f'{i}岁' for i in ages]
plt.xticks(ticks=ages, labels=x_tick, fontproperties=my_font)

plt.xlabel(xlabel='年龄', fontproperties=my_font)
plt.ylabel(ylabel='朋友数', fontproperties=my_font)
plt.title(label='11岁到30岁之间每年交朋友的数量', fontproperties=my_font)

plt.grid(visible=True, alpha=0.1)

plt.savefig('./friend.png')
plt.show()
