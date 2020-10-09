L=int(input())
B=int(input())
if L*B>2*(L+B):
    print('Area')
    print(L*B)
elif 2*(L+B)>L*B:
    print('Peri')
    print(2*(L+B))
else:
    print("Eq")
    print(L*B)
