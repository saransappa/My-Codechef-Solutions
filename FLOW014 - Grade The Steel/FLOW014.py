
s=int(input())
for i in range(s):
    k = input()
    k = k.split(' ')
    h = int(k[0])
    c = float(k[1])
    t = int(k[2])
    if h>50 and c<0.7and t>5600:
        print(10)
    elif h>50 and c<0.7and t<=5600:
        print(9)
    elif h<=50 and c<0.7and t>5600:
        print(8)
    elif h>50 and c>=0.7and t>5600:
        print(7)
    elif (h<=50 and c<0.7 and t<=5600)or(h>50 and c>=0.7 and t<=5600)or(h<=50 and c>=0.7 and t>5600):
        print(6)
    else:
        print(5)
