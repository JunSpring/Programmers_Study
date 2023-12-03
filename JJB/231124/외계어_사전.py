from itertools import *

def solution(spells, dic):
    for word in dic:
        if len(word) == len(spells) and tuple(word) in permutations(spells):
            return 1
    
    return 2