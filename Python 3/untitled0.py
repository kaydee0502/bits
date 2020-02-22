# -*- coding: utf-8 -*-
"""
Created on Sat Feb 15 23:41:57 2020

@author: KayDee
"""

from itertools import permutations


per = list(input().split())

pert = list(permutations(per[0],int(per[1])))

for x in pert:
    d = "".join(x)
    print(d)

