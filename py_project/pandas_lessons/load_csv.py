#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : load_csv.py
#   Last Modified : 2024-07-18 22:33
#   Describe      :
#
# ====================================================
import numpy as np
from icecream import ic

#  美国和英国在youtube上的数据
us_file = './US_video_data_numbers.csv'
gb_file = './GB_video_data_numbers.csv'

#  将两个国家的数据放在一起研究，并保留国家信息(即每条数据的国家来源要保留)
#  加载国家数据
us_data = np.loadtxt(fname=us_file, delimiter=',', dtype=int)
gb_data = np.loadtxt(fname=gb_file, delimiter=',', dtype=int)

#  添加国家信息
#  构造全为0的数组
zeros_data = np.zeros((us_data.shape[0], 1)).astype(int)
#  构造全为1的数组
ones_data = np.ones((gb_data.shape[0], 1)).astype(int)
#  将全为0的数组zeros_data拼接到us_data
us_data = np.hstack((us_data, zeros_data))
#  将全为1的数组ones_data拼接到gb_data
gb_data = np.hstack((gb_data, ones_data))

#  拼接两组数据
final_data = np.vstack((us_data, gb_data))
ic(final_data)
