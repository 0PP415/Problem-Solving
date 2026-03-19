T = int(input())
for i in range(T):
    x1, y1, r1, x2, y2, r2 = map(int,input().split())
    if x1 == x2 and y1 == y2:
        if r1 == r2:
            print(-1)
        else:
            print(0)
    else:
        d = ((x1 - x2)**2 + (y1 - y2)**2)**(1/2)
        if r1 < d and r2 < d :
            if (r1 + r2) == d:
                print(1)
            elif (r1 + r2) > d:
                print(2)
            else:
                print(0)
        else:
            if abs(r1 - r2) > d:
                print(0)
            elif abs(r1 - r2) == d:
                print(1)
            else:
                print(2)