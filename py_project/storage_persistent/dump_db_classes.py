#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : dump_db_classes.py
#   Last Modified : 2024-02-24 18:06
#   Describe      : 
#
# ====================================================

import shelve

db = shelve.open('class-shelve')
for key in db:
    print(key, '=> ', db[key].name, db[key].pay)

bob = db['bob']
print(bob.lastName())
print(db['tom'].lastName())
