def solution(my_string):
    answer = ''
    bindo = {}
    
    for s in my_string:
        try:
            bindo[s] += 1
        except:
            bindo[s] = 1
    
    bindo = dict(sorted(bindo.items(), key=lambda s : s[0]))
    
    for key, value in bindo.items():
        if value == 1:
            answer += key
    
    return answer