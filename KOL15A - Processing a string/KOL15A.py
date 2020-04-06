# cook your dish here
t=int(input())
num="0123456789"
for i in range(t):
    s=input()
    sum=0
    for j in s:
        if j in num:
            sum+=int(j)
    print(sum)