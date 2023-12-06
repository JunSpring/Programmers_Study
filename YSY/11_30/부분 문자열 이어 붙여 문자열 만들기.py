def solution(my_strings, parts):
    answer = ''
    for i in range(0,len(parts)):
        s,e=parts[i]
        print(s,e)
        a=my_strings[i]
        print(a)
        answer+=a[s:e+1]
    return answer