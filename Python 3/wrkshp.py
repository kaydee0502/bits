import random

ls = []
prime = []
base_4 = []
b=0
d = 0 

for _ in range(100):
    ls.append(random.randint(2,100))
    
print(ls)
    
for i in ls:
    a = 2
    while a < i:
        if i % a == 0:
            break
        if a == i-1:
            prime.append(i)
        a+=1

prime.sort()
print(prime)
for a in prime:
    while a != 0:
        b_4 = a%4
        b = b*10 + b_4
        a //= 4
    while b != 0:
        c = b%10
        d = d*10 + c
        b //= 10
    b=0
    base_4.append(d)
    d=0
    
print(base_4)
        

    
