n = int(input())
num = sorted(set(map(int, input().split())))
for i in num:
    print(i, end=' ')