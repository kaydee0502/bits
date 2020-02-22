# -*- coding: utf-8 -*-
"""
Created on Thu Jan 30 18:34:42 2020

@author: KayDee
"""

n = int(input())
name_numbers = dict(input().split() for _ in range(n))
while True:
    try:
        name = input()
        if name in name_numbers:
            print('{}={}'.format(name, name_numbers[name]))
        else:
            print('Not found')
    except:
        break

