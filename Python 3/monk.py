# -*- coding: utf-8 -*-
"""
Created on Wed Feb  5 09:07:40 2020

@author: KayDee
"""

try:

    T = int(input())
    Q = []
    P = []
    cst = 0
    cs = []
    
    for i in range(T):
        Q = str(input().strip())
        P = str(input().strip())
        N = int(input())
        cost = list(map(int,input().split()))
        for j in range(N):
            
            if P == Q[0:len(P)]:
                cst = cst + int(cost[len(P)-1])
                Q = Q[len(P):]
                cost = cost[len(P):]
            else:
                Q = Q[1:]
                cost = cost[1:]
        cs.append(cst)
        cst = 0
                
        
    for w in cs:
        print(int(w))
        
except:
    pass