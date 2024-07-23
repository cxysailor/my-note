#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : adding_second_axis.py
#   Last Modified : 2024-07-03 21:21
#   Describe      : 
#
# ====================================================
from openpyxl import Workbook
from openpyxl.chart import (
    LineChart,
    BarChart,
    Reference,
    Series
)

wb = Workbook()
ws = wb.active

rows = [
    ["Aliens", 2, 3, 4, 5, 6, 7],
    ["Humans", 10, 40, 50, 20, 10, 50]
]

for row in rows:
    ws.append(row)

c1 = BarChart()
v1 = Reference(ws, min_col=1, min_row=1, max_col=7)
c1.add_data(v1, titles_from_data=True, from_rows=True)

c1.x_axis.title = "Days"
c1.y_axis.title = "Aliens"
c1.y_axis.majorGridlines = None
c1.title = "Survey results"

# Create a second chart
c2 = LineChart()
v2 = Reference(ws, min_col=1, min_row=2, max_col=7)
c2.add_data(v2, titles_from_data=True, from_rows=True)
c2.y_axis.axId = 200
c2.y_axis.title = "Humans"

# Display y_axis of the second chart on the right by setting it to cross the x_axis at its maximum
c1.y_axis.crosses = "max"
c1 += c2

ws.add_chart(c1, "D4")

wb.save(filename="secondary.xlsx")
wb.close()
