import sys

N, M = list(map(int, sys.stdin.readline().split()))
results = [list(map(int, sys.stdin.readline().split())) for _ in range(M)]


def make_dist():
    dist = [[0] * N for _ in range(N)]

    for winner, loser in results:
        dist[loser - 1][winner - 1] = 1

    return dist


def floyd(dist):
    for v in range(N):
        dist[v][v] = 1

    for k in range(N):
        for u in range(N):
            for v in range(N):
                dist[u][v] = dist[u][v] or (dist[u][k] and dist[k][v])

    k = 0

    for v in range(N):
        reachable = 0
        for to in range(N):
            if dist[v][to] and to != v:
                reachable += 1
        for frm in range(N):
            if dist[frm][v] and frm != v:
                reachable += 1

        if reachable == N - 1:
            k += 1

    return k


def sol():
    dist = make_dist()
    ans = floyd(dist)

    return ans


print(sol())