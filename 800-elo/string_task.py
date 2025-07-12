inputs = list(input())
res = []
vowels = ["a", "o", "y", "e", "u", "i"]
for i in inputs:
    temp = i.lower()
    if temp not in vowels:
        res.append(".")
        res.append(temp)


print("".join(res))
