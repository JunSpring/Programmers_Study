#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    
    int is_correct = float(int(sqrt(n))) == sqrt(n);
    answer = 2 - is_correct;
    
    return answer;
}