def solution(myString):
    answer = []
    
    myString = myString.replace('x', ' ')
    answer = sorted(myString.split())
    
    
    return answer