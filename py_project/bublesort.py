#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : bublesort.py
#   Last Modified : 2024-02-08 21:14
#   Describe      : 冒泡排序
#
# ====================================================

source_list = [3, 1, 4, 6, 0, 2, 9, 7, 8, 5]
for i in range(len(source_list)):
    for j in range(len(source_list) - i - 1):
        if source_list[j] > source_list[j + 1]:
            temp = source_list[j + 1]
            source_list[j + 1] = source_list[j]
            source_list[j] = temp
print(source_list)
