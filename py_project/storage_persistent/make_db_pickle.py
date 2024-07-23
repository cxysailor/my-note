#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : make_db_pickle.py
#   Last Modified : 2024-06-09 21:02
#   Describe      : 
#
# ====================================================

import pickle
from initdata import db

dbfile = open('people-pickle', 'wb')
pickle.dump(db, dbfile)
dbfile.close()
