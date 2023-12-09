def solution(quizs):
    answer = []
    
    for quiz in quizs:
        formula = quiz.split('=')[0]
        result = int(quiz.split('=')[1])
        
        if eval(formula) == result:
            answer.append('O')
        else:
            answer.append('X')
    
    return answer