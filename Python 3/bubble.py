# -*- coding: utf-8 -*-
"""
Created on Thu Feb 13 23:35:57 2020

@author: KayDee
"""

#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
swaps = 0
# Write Your Code Here
while (True):
    reps = 0
    for j in range(n-1):
        if a[j] > a[j+1]:
            t = a[j]
            a[j] = a[j+1]
            a[j+1] = t
            swaps += 1
            reps += 1
    if reps == 0:
            break

print("Array is sorted in {} swaps.".format(swaps))
print("First Element: {}".format(a[0]))
print("Last Element: {}".format(a[n-1]))
print(a)
         

