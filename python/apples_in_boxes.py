for _ in range(int(input())):
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))

    total = sum(nums)  # sum BEFORE modification

    nums.sort()
    nums[-1] -= 1      # decrement the largest element
    nums.sort()

    if nums[-1] - nums[0] > k or total % 2 == 0:
        print("Jerry")
    else:
        print("Tom")
