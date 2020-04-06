def fact(n):
    if(list[n]==0):
        list[n] = fact(n-1)*n
        return list[n]
    else:
        return list[n]

list = [1]
for i in range(100):
    list.append(0)

t = int(input())
for i in range(t):
    n = int(input())
    print(fact(n))