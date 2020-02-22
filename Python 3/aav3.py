n = int(input())
s = input()

a = len(s)
while 1:
    s = s.split("ab")
    st = ""
    for x in s:
        st += x
    if len(st) == a:
        break
    s = st
    a = len(s)
print(a)