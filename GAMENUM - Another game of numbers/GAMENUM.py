t = int(input())
for y in range(t):
    a,b = map(int,input().split(" "))
    c = bin(a)
    d = bin(b)
    c = c.replace('0b','')
    d = d.replace('0b','')
    if len(c)>len(d):
        k = len(c)-len(d)
        for i in range(k):
            d = '0'+d   
    elif len(c)<len(d):
        k = len(d)-len(c)
        for i in range(k):
            c = '0'+c  
    list = []
    list.append(int(c,2)^int(d,2))
    for i in range(len(d)):
        p=''
        for j in range(len(d)-1):
            p+=d[j]
        p = d[len(d)-1] + p 
        d = p 
        list.append(int(c,2)^int(d,2))
    maxi = -1 
    ind  = -1
    for i in range(len(list)):
        if maxi < list[i]:
            maxi = list[i]
            ind = i 
    print(ind,end=" ")
    print(maxi) 



