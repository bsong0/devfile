# 1688C
def read(T=int):
    return list(map(T, input().split()))


def solve():
    n = read()[0]
    seq = []
    for _ in range(n):
        seq.append(input()), seq.append(input())
    s = input()
    state = [0] * len(seq)

    def dfs(s):
        for ii, i in enumerate(seq):
            if state[ii]:
                continue
            for ji, j in enumerate(seq):
                if state[ji]:
                    continue
                if ii == ji:
                    continue
                tmp = str(s)
                tmp = tmp.replace(i, j)
                if (len(tmp) == 1):
                    print(tmp)
                    return 1
                if tmp == s:
                    break
                state[ii] = 1
                state[ji] = 1
                if dfs(tmp):
                    return 1
                state[ii] = 0
                state[ji] = 0
    
    dfs(s)
        


if __name__ == '__main__':
    T = read()[0]
    for _ in range(T):
        solve()
