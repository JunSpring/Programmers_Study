def solution(my_string):
    answer = []
    alphabet = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
    for i in alphabet:
        n=0
        for j in my_string:
            if i==j:
                n+=1
        answer.append(n)
    for i in alphabet:
        n=0
        for j in my_string:
            if i.lower()==j:
                n+=1
        answer.append(n)
    return answer