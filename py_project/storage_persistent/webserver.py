#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : webserver.py
#   Last Modified : 2024-02-27 19:51
#   Describe      : 
#
# ====================================================

import os
from http.server import HTTPServer, CGIHTTPRequestHandler

webdir = '.' # 存放HTML文件和cgi-bin脚本目录的所在
port = 80 # 缺省http://localhost/,也可以使用http://localhost:xxxx/

os.chdir(webdir) # 在HTML根目录中运行
srvraddr = ("", port) # 我的主机名和端口号
srvrobj = HTTPServer(srvraddr, CGIHTTPRequestHandler)
srvrobj.serve_forever() # 以永久地守护进程运行
