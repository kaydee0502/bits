class stack():
    def __init__(self,data):
        self.data = data

    def push(self):
        obj = self.data
        global instance
        global top
        global s
        if top >= len(instance):
            raise Exception('Stack Overflow!, Not the website you retard xD!')
        s.append(obj)
        top += 1
        print(s)
    
    
    def pop(self):
        obj = self.data
        global s
        global top
        if top == -1:
            raise Exception('Stack Underflow')
        obj = s[-1]
        del s[-1]
        top -= 1
        return obj
                
                           

if __name__ == "__main__":
    top = 0
    instance = input().split(" ")
    s = []
    operators = ['+','-','*','^','/']

    for _ in instance:
        f = stack(_)
        f.push()
        if _ in operators:
            ind = s.index(_)
            if ind >= 2:
                op = f.pop()
                a = f.pop()
                b = f.pop()
                if op == '/':
                    op = '//'
                if op == '^':
                    op = '**'
                print (">> "+"".join(str(b))+"".join(op)+"".join(str(a)))
                res = eval("".join(str(b))+"".join(op)+"".join(str(a)))
                r = stack(res)
                r.push()
                
    if len(s) != 1:
        raise Exception("Stack Intrupted!")
                
            
        
    