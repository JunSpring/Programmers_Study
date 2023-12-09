def solution(participant, completion):
    answer = ''
    
    participant.sort()
    completion.sort()
    
    for i, person in enumerate(participant):
        if i == len(completion) or person != completion[i]:
            answer = person
            break

    return answer