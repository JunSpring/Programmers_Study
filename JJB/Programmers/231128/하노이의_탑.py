def hanoi_tower(n, from_rod, to_rod, aux_rod, result):
    if n == 1:
        result.append([from_rod, to_rod])
        return
    hanoi_tower(n - 1, from_rod, aux_rod, to_rod, result)
    result.append([from_rod, to_rod])
    hanoi_tower(n - 1, aux_rod, to_rod, from_rod, result)

def solution(n):
    answer = []
    hanoi_tower(n, 1, 3, 2, answer)
    return answer