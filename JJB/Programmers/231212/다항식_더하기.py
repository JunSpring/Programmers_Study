def solution(polynomial):
    answer = ''
    
    x = 0
    n = 0
    
    polynomial = polynomial.replace('+', '').split()
    
    for text in polynomial:
        if 'x' in text:
            if len(text) == 1:
                x += 1
            else:
                x += int(text[:-1])
        else:
            n += int(text)
            
    if x != 0:
        if x != 1:
            answer += str(x)
        answer += "x"
    if n != 0:
        if answer:
            answer += " + "
        answer += str(n)
        
    return answer