#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : dump_db_shelve.py
#   Last Modified : 2024-02-23 15:38
#   Describe      : 
#
# ====================================================

import shelve

db = shelve.open('people-shelve')
for key in db:
    print(key, '=>  ', db[key])
print(db['sue']['name'])
db.close()
