def gcd(a, b):
    while(b):
        a, b = b, a%b
    return a

def solution(numer1, denom1, numer2, denom2):
    answer = []
    
    new_numer = numer1*denom2 + numer2*denom1
    new_denom = denom1*denom2
    
    common = gcd(new_numer, new_denom)
    new_numer /= common
    new_denom /= common
    
    answer.append(new_numer)
    answer.append(new_denom)
    
    return answer