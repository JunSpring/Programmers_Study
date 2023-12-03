def solution(arr1, arr2):
    answer = []
    
    for col1, col2 in zip(arr1, arr2):
        temp = []
        for row1, row2 in zip(col1, col2):
            temp.append(row1 + row2)
        answer.append(temp)
    
    return answer