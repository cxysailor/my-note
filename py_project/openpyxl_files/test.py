#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : test.py
#   Last Modified : 2024-07-04 23:57
#   Describe      :
#
# ====================================================
from openpyxl import Workbook
from openpyxl.chart import BarChart, Reference


def main():
    """docstring for main"""
    wb = Workbook()
    ws = wb.active

    rows = [
        ["Fruit", "Sales", "Percent"],
        ["Apple", 50, 15],
        ["Pear", 40, 25],
        ["Orange", 30, 10]
    ]

    for row in rows:
        ws.append(row)

    chart = BarChart()
    chart.type = "col"
    chart.style = 10
    chart.title = "Bar Chart"
    data = Reference(ws, min_col=2, min_row=1, max_col=3, max_row=4)
    labels = Reference(ws, min_col=1, min_row=2, max_row=4)
    chart.add_data(data, titles_from_data=True)
    chart.set_categories(labels=labels)
    chart.x_axis.title = "Fruit"
    chart.y_axis.title = "Sales"

    ws.add_chart(chart=chart, anchor="E4")

    wb.save(filename="test.xlsx")
    wb.close()


if __name__ == "__main__":
    main()
