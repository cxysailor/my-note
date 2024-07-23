#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : thread_count_mutex.py
#   Last Modified : 2024-03-13 14:51
#   Describe      : 
#
# ====================================================

import time
import _thread as thread

def counter(myID, count):
    for i in range(count):
        time.sleep(1)
        mutex.acquire()
        print('[%s] => %s' % (myID, i))
        mutex.release()

if __name__ == "__main__":
    mutex = thread.allocate_lock()
    for i in range(5):
        thread.start_new_thread(counter, (i, 5))
    time.sleep(6)
    print('Main thread existing.')
