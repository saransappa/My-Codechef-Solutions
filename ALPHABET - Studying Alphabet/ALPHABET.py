s = input()
n = int(input())
for i in range(n):
    t = input()
    flag = False
    for k in t:
        if k not in s:
            print('No')
            flag = True
            break
    if(flag == False):
        print("Yes")