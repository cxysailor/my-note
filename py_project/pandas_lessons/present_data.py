#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : present_data.py
#   Last Modified : 2024-07-19 16:47
#   Describe      :
#
# ====================================================

import numpy as np
import  matplotlib.pyplot as plt

us_file = './US_video_data_numbers.csv'

us_data = np.loadtxt(
    fname=us_file,
    delimiter=',',
    dtype='int'
)
#  获取评论的数据 - 最后一列
us_data_comment = us_data[:, -1]
#  过滤出小于5000的数据
us_data_comment = us_data_comment[us_data_comment <= 5000]
#  找的评论数据的最大值和最小值
comment_max = us_data_comment.max()
comment_min = us_data_comment.min()
print(comment_max, comment_min)
#  根据最大值和最小值确定组距
dist = 50
#  获取组数
bin_nums = (comment_max - comment_min) // dist
#  绘图
plt.figure(figsize=(20, 8), dpi=80)
plt.hist(us_data_comment, bin_nums)

plt.show()
