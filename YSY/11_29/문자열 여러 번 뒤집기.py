def solution(my_string, queries):
    answer = ''
    
    for s, e in queries:
        my_string = list(my_string[:s]) + list(reversed(list(my_string[s:e+1]))) + list(my_string[e+1:])
    answer = ''.join(my_string)
    
    return answer