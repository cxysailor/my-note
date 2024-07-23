#!/usr/bin/env python3
# encoding: utf-8
# coding style: pep8
# ====================================================
#   Copyright (C) 2024  All rights reserved.
#
#   Author        : cxysailor
#   Email         : cxysailor@163.com
#   File Name     : person.py
#   Last Modified : 2024-02-23 17:29
#   Describe      : 
#
# ====================================================
class Person:
    """员工的信息资料记录"""

    def __init__(self, name, age, pay=0.0, job=None):
        self.name = name
        self.age = age
        self.pay = pay
        self.job = job

    def __str__(self):

        return '<%s => %s>' %(self.__class__.__name__, self.name)
        

    def lastName(self):
        """返回员工的姓"""
        return self.name.split()[-1]

    def giveRaise(self, percent):
        """增加员工的工资
        :percent: 工资增加的比例
        """
        self.pay *= (1.0 + percent)


if __name__ == "__main__":
    bob = Person('Bob Smith', 42, 30000.0, 'software')
    sue = Person('Sue Jones', 45, 40000.0, 'hardware')
    print(bob.name, sue.pay)
    print(bob.lastName())
    sue.giveRaise(.10)
    print(sue.pay)
