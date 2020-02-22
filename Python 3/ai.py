# -*- coding: utf-8 -*-
"""
Created on Sat Jan  4 16:58:11 2020

@author: KayDee
"""

#!/usr/bin/python
prncs = []

def displayPathtoPrincess(n,grid):
    for a in range (n):
        for b in range (n):
            if "p" in grid[a][b]:
                prncs.append([a,b])
    for a in range (n):
        for b in range (n):
            if "m" in grid[a][b]:
                prncs.append([a,b])
            
    if prncs[0][0]<prncs[1][0]:
        for a in range(prncs[0][0],prncs[1][0]):
                print("UP")
    if prncs[0][0]>prncs[1][0]:
        for a in range(prncs[1][0],prncs[0][0]):
                print("DOWN")
    if prncs[0][1]>prncs[1][1]:
        for a in range(prncs[1][1],prncs[0][1]):
                print("RIGHT")
    if prncs[0][1]<prncs[1][1]:
        for a in range(prncs[0][1],prncs[1][1]):
                print("LEFT")
    
    
            

m = int(input())
grid = [] 
for i in range(m): 
    grid.append(input().strip())
    
for i in range(m):
    r = m - len(grid[i])
    for j in range(r):
        grid[i] = grid[i] + "-"
        
        
    
    


displayPathtoPrincess(m,grid)