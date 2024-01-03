import math

def solution(arr):
    answer = arr
    for i in range(0,11):
        if len(arr)==pow(2,i):
            break
        elif len(arr)<pow(2,i):
            while len(arr)<pow(2,i):
                answer.append(0)
            break
    return answer