#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : doughnut_chart.py
#   Last Modified : 2024-07-02 14:25
#   Describe      : 
#
# ====================================================
from openpyxl import Workbook
from openpyxl.chart import (
    DoughnutChart,
    Reference,
    Series
)
from openpyxl.chart.series import DataPoint

data = [
    ["Pie", 2014, 2015],
    ["Plain", 40, 50],
    ["Jam", 2, 10],
    ["Lime", 20, 30],
    ["Chocolate", 30, 40]
]

wb = Workbook()
ws = wb.active

for row in data:
    ws.append(row)

chart = DoughnutChart()
labels = Reference(ws, min_col=1, min_row=2, max_row=5)
data = Reference(ws, min_col=2, min_row=1, max_row=5)
chart.add_data(data, titles_from_data=True)
chart.set_categories(labels)
chart.title = "Doughnut sold by category"
chart.style = 24

# Cut the first slice out of the Doughnut
slices = [DataPoint(idx=i) for i in range(4)]
plain, jam, lime, chocolate = slices
chart.series[0].data_points = slices
plain.graphicalProperties.solidFill = "FAE1D0"
jam.graphicalProperties.solidFill = "BB2244"
lime.graphicalProperties.solidFill = "22DD22"
chocolate.graphicalProperties.solidFill = "61210B"
chocolate.explosion = 10

ws.add_chart(chart, "E1")

from copy import deepcopy

chart2 = deepcopy(chart)
chart2.title = None
data = Reference(ws, min_col=3, min_row=1, max_row=5)
series2 = Series(data, title_from_data=True)
series2.data_points = slices
chart2.series.append(series2)

ws.add_chart(chart2, "E17")

wb.save(filename="doughnut.xlsx")
wb.close()
