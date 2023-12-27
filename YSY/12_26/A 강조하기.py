def solution(myString):
    answer = ''
    for i in range(0,len(myString)):
        if myString[i]=="a":
            answer+="A"
        elif myString[i]!="A" and myString[i].isupper():
            answer+=myString[i].lower()
        else:
            answer+=myString[i]
    return answer