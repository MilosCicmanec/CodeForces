for _ in range(int(input())):
    loop = int(input())
    program = [int(i) for i in input().split()]
    obstacle = []
    for i range(loop):
        inputs = [int(i) for i in input().split()]
        obstacle.append((inputs[0],inputs[1]))
    height = [0 for i in range(loop+1)]
    for i in range(loop):
        if program[i] == 0:
            height[i+1] = height[i]
        elif program[i] == 1:
            height[i+1] = height[i] + 1
        else:
            pass
        b,t = obstacle[i]
        if not b <= height[i+1] <= t:
            print(-1)
            break

