def solution(array):
    answer = 0
    
    array_dic = {}
    for i in array:
        try:
            array_dic[i] += 1
        except:
            array_dic[i] = 1
            
    mode = -1
    for key, value in array_dic.items():
        if value > mode:
            mode = value
            answer = key
        elif value == mode:
            answer = -1
        
    return answer