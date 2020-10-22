# Valid Triangles  FLOW013
t=int(input())
for a in range(t):
    p = input()
    p = p.split(' ')
    x = int(p[0])
    y = int(p[1])
    z = int(p[2])
    if (x+y+z==180):
        print('YES')
    else:
        print('NO')
