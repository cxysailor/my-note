#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : line_chart_3d.py
#   Last Modified : 2024-06-30 19:47
#   Describe      : 
#
# ====================================================
from datetime import date
from openpyxl import Workbook
from openpyxl.chart import LineChart3D, Reference
from openpyxl.chart.axis import DateAxis

wb = Workbook()
ws = wb.active

rows = [
    ["Date", "Batch 1", "Batch 2", "Batch 3"],
    [date(2015, 9, 1), 40, 30, 25],
    [date(2015, 9, 2), 40, 25, 30],
    [date(2015, 9, 3), 50, 30, 45],
    [date(2015, 9, 4), 30, 25, 40],
    [date(2015, 9, 5), 25, 35, 30],
    [date(2015, 9, 6), 20, 40, 35]
]

for row in rows:
    ws.append(row)

c1 = LineChart3D()
c1.title = "3D Line Chart"
c1.legend = None
c1.style = 15
c1.y_axis.title = "Size"
c1.x_axis.title = "Test Number"

data = Reference(ws, min_col=2, min_row=1, max_col=4, max_row=7)
c1.add_data(data, titles_from_data=True)

ws.add_chart(c1, "A10")

wb.save(filename="line3d.xlsx")
wb.close()
