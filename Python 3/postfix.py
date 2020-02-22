class stack:
    def __init__(self,data):
        self.data = data

    def stck(self):
        obj = self.data
        global s
        s.append(obj)

    def pf():
        res = 0
        op = list("* - / +".split())
        global s
        i = len(s)
        a = 0
        if (s[0] or s[1]) in op:
            raise Exception("Invalid!!")
        else:
            while a < i:
                if s[a] in op:

                    res = eval("".join(s[a-2])+"".join(s[a])+"".join(s[a-1]))
                    del s[a],s[a-1],s[a-2]
                    s.insert(a-2,str(res))
                    a = 0
                    i -= 2
                a += 1
        print("Postfix performed on stack :",int(res))
                    




if __name__ == "__main__":
    n = int(input())
    s = []


    for _ in range (n):
        x = input()
        f = stack(x)
        f.stck()
    
    stack.pf()
