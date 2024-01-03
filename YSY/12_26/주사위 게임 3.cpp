#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) 
{
    int answer = 0;
    
    unordered_map<int, int> numbers;
    numbers[a]++;
    numbers[b]++;
    numbers[c]++;
    numbers[d]++;
    
    if(numbers.size()==1)
        answer=1111*a;
    else if (numbers.size()==2)
    {
        int mode;
        int q,p=0;
        for (auto& number:numbers)
        {
            if (number.second==1 || number.second==3)
            {
                if (number.second==1)
                    q=number.first;
                else if (number.second==3)
                    p=number.first;
                mode=0;
            }
            else if (number.second==2)
            {
                if (p==0)
                    p=number.first;
                else if (p!=0)
                    q=number.first;
                mode=1;
            }
        }
        if (mode==0)
            answer=(10*p+q)*(10*p+q);
        else if (mode==1)
        {
            if (p-q<0)
                answer=(p+q)*-(p-q);
            else
                answer=(p+q)*(p-q);
        }
    }
    else if (numbers.size()==3)
    {
        int r,q=0;
        for (auto& number:numbers)
        {
            if(number.second==1)
            {
                if(q==0)
                    q=number.first;
                else
                    r=number.first;
            }
        }
        answer=q*r;
    }
    else
        if(a<b && a<c && a<d)
            answer=a;
        else if (b<a && b<c && b<d)
            answer=b;
        else if (c<a && c<b && c<d)
            answer=c;
        else
            answer=d;
    return answer;
}