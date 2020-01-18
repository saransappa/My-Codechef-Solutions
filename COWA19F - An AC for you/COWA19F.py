# cook your dish here
t=int(input())
for i in range(t):
    s=input()
    k=''.join(sorted(s))
    k=k[::-1]
    print(k)