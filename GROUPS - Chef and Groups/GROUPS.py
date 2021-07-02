t = int(input())
for _ in range(t):
    s = input()
    s = s.split('0')
    ans = 0
    for i in s:
        i = i.replace('0','')
        if len(i)>0:
            ans+=1
    print(ans)