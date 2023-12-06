def solution(todo_list, finished):
    answer = []
    for i in range(0,len(todo_list)):
        if finished[i]:
            pass
        elif not finished[i]:
            answer.append(todo_list[i])
    return answer