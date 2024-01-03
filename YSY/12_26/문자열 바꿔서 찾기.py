def solution(myString, pat):
    answer = 0
    Mystring=""
    for i in myString:
        if i=="A":
            Mystring+="B"
        elif i=="B":
            Mystring+="A"
    for i in range(0,len(Mystring)-len(pat)+1):
        if Mystring[i:i+len(pat)]==pat:
            answer=1
    return answer