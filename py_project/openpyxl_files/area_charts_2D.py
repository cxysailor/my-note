#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : area_charts.py
#   Last Modified : 2024-06-29 22:36
#   Describe      : 
#
# ====================================================
from openpyxl import Workbook
from openpyxl.chart import(
    AreaChart,
    Reference,
    series
)
wb = Workbook()
ws = wb.active

rows = [
    ["Number", "Batch 1", "Batch 2"],
    [2, 40, 30],
    [3, 40, 25],
    [4, 50, 30],
    [5, 30, 10],
    [6, 25, 5],
    [7, 50, 10]
]

for row in rows:
    ws.append(row)

chart = AreaChart()
chart.title = "Area Chart"
chart.style = 13
chart.x_axis.title = "Text"
chart.y_axis.title = "Percentage"

cats = Reference(ws, min_col=1, min_row=1, max_row=7)
data = Reference(ws, min_col=2, min_row=1, max_col=3, max_row=7)
chart.add_data(data, titles_from_data=True)
chart.set_categories(cats)

ws.add_chart(chart, "A10")
wb.save(filename="area.xlsx")
wb.close()
