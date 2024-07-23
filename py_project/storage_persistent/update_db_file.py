#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : update_db_file.py
#   Last Modified : 2024-02-22 23:08
#   Describe      : 
#
# ====================================================

from make_db_file import loadDbase, storeDbase

db= loadDbase()
db['sue']['pay'] *= 1.10
db['tom']['name'] = 'Tom Tom'
storeDbase(db)
