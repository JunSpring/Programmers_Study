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
    int size = numbers.size();
    
    if(size == 1)
        answer = 1111 * a;
    else if(size == 2)
    {
        int mode;
        int q, p = 0;
        for(const auto &number : numbers)
        {
            if(number.second == 1 || number.second == 3)
            {
                if(number.second == 1)
                    q = number.first;
                else if(number.second == 3)
                    p = number.first;
                mode = 0;
            }
            else if(number.second == 2)
            {
                if(p == 0)
                    p = number.first;
                else
                    q = number.first;
                mode = 1;
            }
        }
        
        if(mode == 0)
            answer = pow(10 * p + q, 2);
        else
            answer = (p + q) * abs(p - q);
    }
    else if(size == 3)
    {
        int r, q = 0;
        for(const auto &number : numbers)
        {
            if(number.second == 1)
            {
                if(q == 0)
                    q = number.first;
                else
                    r = number.first;
            }
        }
        answer = q * r;
    }
    else
        answer = min_element(numbers.begin(), numbers.end())->first;
    
    return answer;
}
