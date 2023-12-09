#include <string>
#include <vector>

using namespace std;

int solution(int order) 
{
    int answer = 0;
    
    while(order)
    {
        int one_number = order%10;
        answer += one_number!=0 && one_number%3==0;
        order /= 10;
    }
    
    return answer;
}