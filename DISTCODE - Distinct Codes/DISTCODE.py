# cook your dish here
t=int(input())
for q in range(t):
    s=input()
    list=[]
    for k in range(len(s)-1):
        str=""
        str+=s[k]+s[k+1]
        if str not in list:
            list.append(str)
    print(len(list))