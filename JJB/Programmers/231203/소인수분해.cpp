#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
    
    for(int i = 2; i <= n; i++)
    {
        if(n==1)
            break;
        
        else if(n%i != 0)
            continue;
        
        while(n%i == 0)
            n /= i;
        answer.push_back(i);
    }
    
    return answer;
}