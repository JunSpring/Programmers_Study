def solution(myString, pat):
    answer = 0
    myString = myString.lower()
    pat = pat.lower()
    for i in range(0,len(myString)-len(pat)+1):
        if myString[i:i+len(pat)]==pat:
            answer=1
            break
    return answer