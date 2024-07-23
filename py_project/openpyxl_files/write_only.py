#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : write_only.py
#   Last Modified : 2024-07-05 22:29
#   Describe      :
#
# ====================================================
from openpyxl import Workbook

wb = Workbook(write_only=True)
ws = wb.create_sheet()

# now we'll fill it with 100 rows x 200 columns
for irow in range(100):
    ws.append(["%d" % i for i in range(200)])

# save the file
wb.save(filename="new_big_file.xlsx")
wb.close()
