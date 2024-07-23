#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : dump_db_pickle_recs.py
#   Last Modified : 2024-02-23 09:34
#   Describe      : 
#
# ====================================================

import pickle, glob

for filename in glob.glob('*.pkl'):
    recfile = open(filename, 'rb')
    record = pickle.load(recfile)
    print(filename, '=>', record)

suefile = open('sue.pkl', 'rb')
print(pickle.load(suefile)['name'])
