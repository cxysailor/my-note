#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : peopleinteract_update.py
#   Last Modified : 2024-02-25 10:59
#   Describe      : 
#
# ====================================================

import shelve
from person import Person

fieldnames = ('name', 'age', 'job', 'pay')
db = shelve.open('class-shelve')
while True:
    key = input('\nKey? => ')
    if not key: break
    if key in db:
        record = db[key]
    else:
        record = Person(name='?', age='?')
    for field in fieldnames:
        currval = getattr(record, field)
        newtext = input('\t[%s]=%s\n\t\tnew?=>' % (field, currval))
        if newtext:
            setattr(record, field, eval(newtext))
        db[key] = record
db.close()
