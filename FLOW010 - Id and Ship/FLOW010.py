# Id and ship FLOW010
t=int(input())
for x in range(t):
    x=str(input())
    if (x=='b') or (x=='B'):
        print('BattleShip')
    elif (x=='c') or (x=='C'):
        print('Cruiser')
    elif(x=='d') or (x=='D'):
        print('Destroyer')
    elif(x=='f') or (x=='F'):
        print('Frigate')
