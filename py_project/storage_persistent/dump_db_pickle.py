#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : dump_db_pickle.py
#   Last Modified : 2024-02-22 23:25
#   Describe      : 
#
# ====================================================

import pickle

dbfile = open('people-pickle', 'rb')
db = pickle.load(dbfile)
for key in db:
    print(key, '=>\n  ', db[key])
print(db['sue']['name'])
