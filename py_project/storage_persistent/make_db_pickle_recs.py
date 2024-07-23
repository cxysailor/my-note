#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : make_db_pickle_recs.py
#   Last Modified : 2024-02-23 09:31
#   Describe      : 
#
# ====================================================

from initdata import bob, sue, tom
import pickle

for (key, record) in [('bob', bob), ('sue', sue), ('tom', tom)]:
    recfile = open(key + '.pkl', 'wb')
    pickle.dump(record, recfile)
    recfile.close()
