#include <string>
#include <vector>

using namespace std;

unsigned long long int solution(int balls, int share) 
{
    if(balls==share || share==0)
        return 1;

    unsigned long long int answer = 1;
    for (int i = 0; i < min(share, balls - share); i++)
    {
        answer *= (balls - i);
        answer /= (i + 1);
    }
    
    return answer;
}