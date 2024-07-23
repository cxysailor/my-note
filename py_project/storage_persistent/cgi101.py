#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : cgi101.py
#   Last Modified : 2024-02-27 19:34
#   Describe      : 
#
# ====================================================

import cgi

form = cgi.FieldStorage()
print('Content-type: text/html\n')
print('<title>Reply Page</title>')
if not 'user' in form:
    print('<h1>Who are you?</h1>')
else:
    print('/<h1>Hello <i>%s</i>' % cgi.escape(form['user'].value))
