t=int(input())
for i in range(t):
    s= input()
    s = s.split(" ")
    a=int(s[0])
    b=int(s[1])
    c=int(s[2])
    d=int(s[3])
    if(a==b and c==d) or (a==d and b==c) or (a==c and b==d):
        print('YES')
    else:
        print('NO')
