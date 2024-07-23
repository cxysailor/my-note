#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : fill_nan.py
#   Last Modified : 2024-07-19 16:11
#   Describe      :
#
# ====================================================

import numpy as np


def fill_ndarray(arr):
    """将数组中的nan值填充为均值"""
    for i in range(arr.shape[1]):  # 遍历数组的每一列
        temp_col = arr[:, i]  # 数组的当前列(0, 1, 2, 3列)
        nan_num = np.count_nonzero(temp_col != temp_col)  # 获取nan的个数
        if nan_num != 0:  # 不是0，则说明存在nan
            temp_not_nan_col = temp_col[temp_col == temp_col]  # 选出非nan值
            #  将nan值填充为该列的平均值
            temp_col[np.isnan(temp_col)] = temp_not_nan_col.mean()
    return arr


if __name__ == "__main__":
    t = np.arange(24).reshape((4, 6)).astype(float)
    t[1, 2:] = np.nan
    print(t)
    t = fill_ndarray(t)
    print(t)
