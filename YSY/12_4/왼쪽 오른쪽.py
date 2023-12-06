def solution(str_list):
    answer = []
    for i in range(0,len(str_list)):
        if str_list[i]=="l":
            answer=str_list[0:i]
            break
        elif str_list[i]=="r":
            answer=str_list[i+1:]
            break
    return answer