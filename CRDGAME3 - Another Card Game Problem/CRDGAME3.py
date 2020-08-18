# cook your dish here
def func(a):
    s = ''
    if a/9 >=1:
        p = a//9
        a = a%9
        s+='9'*p
    if a/8 >=1:
        p = a//8
        a = a%8
        s+='8'*p
    if a/7 >=1:
        p = a//7
        a = a%7
        s+='7'*p
    if a/6 >=1:
        p = a//6
        a = a%6
        s+='6'*p
    if a/5 >=1:
        p = a//5
        a = a%5
        s+='5'*p
    if a/4 >=1:
        p = a//4
        a = a%4
        s+='4'*p
    if a/3 >=1:
        p = a//3
        a = a%3
        s+='3'*p
    if a/2 >=1:
        p = a//2
        a = a%2
        s+='2'*p
    if a/1 >=1:
        p = a//1
        a = a%1
        s+='1'*p
    return s

t = int(input())
for _ in range(t):
    z = input().split()
    pc = int(z[0])
    pr = int(z[1])
    c = func(pc)
    r = func(pr)
    if len(c)<len(r):
        print("0 "+str(len(c)))
    else:
        print("1 "+str(len(r)))
        