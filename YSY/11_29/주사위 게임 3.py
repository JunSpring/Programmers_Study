def solution(a, b, c, d):
    answer = 0
    
    dice = {1:0, 2:0, 3:0, 4:0, 5:0, 6:0}
    dice[a] += 1
    dice[b] += 1
    dice[c] += 1
    dice[d] += 1
    p=0
    q=0
    r=0
    
    print(max(dice.values()))
    if max(dice.values())==4:
        answer=1111*a
    elif max(dice.values())==3:
        for i in range (1,7):
            n=dice.get(i)
            if n==1:
                q=i
            elif n==3:
                p=i
        answer=(10*p+q)**2
            
    elif max(dice.values())==2:
        if len(set(dice.values())) == 2:
            two=[]
            for i in range(1,7):
                n=dice.get(i)
                if n==2:
                    two.append(i)
            p = two[0]
            q = two[1]
            answer = (p+q)*abs(p-q) 
        elif len(set(dice.values())) == 3:
            one=[]
            for i in range(1,7):
                n=dice.get(i)
                if n==1:
                    one.append(i)
            q = one[0]
            r = one[1]
            answer = q*r   
    elif max(dice.values())==1:
        answer=min([a,b,c,d])
    
    # if a==b==c==d:
    #     answer=a
    # elif (a==b==c):
    #     answer=(10*a+d)**2
    # elif (a==b==d):
    #     answer=(10*a+c)**2
    # elif (a==c==d):
    #     answer=(10*a+b)**2
    # elif (b==c==d):
    #     answer=(10*d+a)**2
    
    return answer