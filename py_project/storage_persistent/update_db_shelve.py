#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : update_db_shelve.py
#   Last Modified : 2024-02-23 15:29
#   Describe      : 
#
# ====================================================

from initdata import tom
import shelve

db = shelve.open('people-shelve')
sue = db['sue']
sue['pay'] *= 1.50
db['sue'] = sue
db['tom'] = tom
db.close()
