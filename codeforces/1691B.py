def read(T = int):
    return list(map(T, input().split()))

def solve():
    n = read()[0]
    a = read()
    acp = a.copy()
    rs = set()
    res = []
    a = [(i, j) for i, j in enumerate(a)]
    while len(a) > 1:
        t = a[0]
        for j, i in enumerate(a):
            if i[1] >= t[1] and i[0] != t[0]:
                res.append(i[0])
                a.pop(j)
        a.append(a.pop(0))
                
    
    res.append(a[0][0])
    for i in range(n):
        if acp[i] > acp[res[i]]:
            print("-1")
            return
    for i in res:
        print(i + 1, end=' ')
    print()
    

if __name__ == '__main__':
    t = read()[0]
    for _ in range(t):
        solve()