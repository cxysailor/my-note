#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : fork_count.py
#   Last Modified : 2024-03-10 20:50
#   Describe      : 
#
# ====================================================

import os
import time


def counter(count):  # 在新进程中运行
    """
    分支进程基本操作:
    本程序启用了5个副本，与原程序并行运行；
    每个副本在同一个标准输出流上重复5次，分支操作复制进程内存，包括文件描述符；
    目前分支操作在没有Cygwin的Windows下不能进行，在Windows下可以用os.spawnv或者multiprocessing来代替，spawnv大概相当于fork和exec的组合
    """
    for i  in range(count):
        time.sleep(1)  # 模拟真实工作
        print('[%s] => %s' % (os.getpid(), i))


if __name__ == "__main__":
    for i in range(5):
        pid = os.fork()
        if pid != 0:
            print('Process %d spawned' % pid)  # 在父进程中：继续
        else:
            counter(5)  # 否则在子/新的进程中运行
            os._exit(0)  # 运行函数并退出
    print('Main process exitting.')  # 父进程不用等待
