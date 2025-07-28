import math
def distance(p1,p2):
    return math.sqrt((p1[0]-p2[0])**2+(p1[1]-p2[1])**2)
for i in range(int(input())):
    cords = [int(i) for i in input().split()]
    l = (-cords[0],0)
    r = (cords[1],0)
    d = (0,-cords[2])
    u = (0,cords[3])
    if distance(l,u) == distance(u,r) == distance(r,d) == distance(l,d):
        if distance(l,r) == distance(u,d):
            print("yes")
        else:
            print("no")
    else:
        print("no")
