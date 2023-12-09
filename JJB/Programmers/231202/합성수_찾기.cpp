#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool is_composite(const int &n)
{
    int number = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n%i==0)
            number++;
        if(number>=3)
            return true;
    }
    return false;
}

int solution(int n) 
{
    int answer = 0;
    
    for(int i = 2; i <= n; i++)
        answer += is_composite(i);
    
    return answer;
}