for t in range(int(input())):
    size,deg = map(int,input().split())
    arr = list(map(int,input().split()))
    result = [0]*size
    for index,element in enumerate(arr):
        pos = index - deg
        if pos < 0:
            pos += size
        result[pos] = element
    print(*result)
