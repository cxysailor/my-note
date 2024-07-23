#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : person_start.py
#   Last Modified : 2024-02-23 16:08
#   Describe      : 
#
# ====================================================
class Person:

    """员工的信息资料"""

    def __init__(self, name, age, pay=0.0, job=None):
        """初始化..."""
        self.name = name
        self.age = age
        self.pay = pay
        self.job = job


if __name__ == "__main__":
    bob = Person('Bob Smith', 42, 30000, 'software')
    sue = Person('Sue Jones', 45, 40000, 'hardware')
    print(bob.name, sue.pay)

    print(bob.name.split()[-1])
    sue.pay *= 1.10
    print(sue.pay)
