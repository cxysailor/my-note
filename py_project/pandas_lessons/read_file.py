#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : read_file.py
#   Last Modified : 2024-07-23 03:57
#   Describe      :
#
# ====================================================

import pandas as pd
import pymysql

#  dog_file = './dogNames2.csv'
#  df = pd.read_csv(dog_file)
#  df的排序
#  df = df.sort_values(by='Count_AnimalName')
#  print(df)

conn = pymysql.connect(
    host='localhost',
    port=3306,
    user='root',
    passwd='cxy',
    database='fund'
)
sql = 'call fundbrief();'
df = pd.read_sql(sql=sql, con=conn)
print(df.describe())
