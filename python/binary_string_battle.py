def bob(arr, length):
    cur = sum(arr[:length])
    l = 0
    r = length - 1
    best = [cur, (l, r)]  # Initialize with actual sum
            
    while r + 1 < len(arr):
        cur -= arr[l]
        cur += arr[r + 1]
        l += 1
        r += 1
        if cur < best[0]:
            best[0] = cur
            best[1] = (l, r)
    return best[1]

def alice(arr, k):
    count = k
    l = 0 
    r = len(arr) - 1
    res = []
    while l <= r:
        if l == r:
            if arr[l] == 1 and count >= 1:
                res.append(l)
                count -= 1
        else:
            if arr[l] == 1 and count >= 1:
                res.append(l)
                count -= 1
            if arr[r] == 1 and count >= 1:
                res.append(r)
                count -= 1
        r -= 1
        l += 1
    return res

for _ in range(int(input())):
    settings = [int(i) for i in input().split()]
    k = settings[1]
    array = list(input())
    array = [int(i) for i in array]
    
    seen_states = set()

    while True:
        # Detect loop
        state = ''.join(map(str, array))
        if state in seen_states:
            print("Bob")
            break
        seen_states.add(state)

        # Alice's turn
        for i in alice(array, k):
            array[i] = 0
        if sum(array) == 0:
            print("Alice")
            break

        # Bob's turn
        l, r = bob(array, k)
        for i in range(l, r + 1):
            array[i] = 1
        if sum(array) == len(array):
            print("Bob")
            break
