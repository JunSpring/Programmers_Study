def solution(emergency):
    answer = []
    
    sorted_emergency = sorted(emergency, reverse=True)
    answer = list(map(lambda x: sorted_emergency.find(x)+1, emergency))
    
    return answer