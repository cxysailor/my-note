#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : make_db_shelve.py
#   Last Modified : 2024-02-23 15:25
#   Describe      : 
#
# ====================================================

from initdata import bob, sue
import shelve

db = shelve.open('people-shelve')
db['bob'] = bob
db['sue'] = sue
db.close()
