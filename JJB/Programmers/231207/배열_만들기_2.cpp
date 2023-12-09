#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) 
{
    vector<int> answer;
    
    for(int num = l; num <= r; num++)
    {
        int temp = num;
        
        while(temp)
        {
            if(!(temp%10==0||temp%10==5))
                break;
            temp /= 10;
        }
        
        if(!temp)
            answer.push_back(num);
    }
    
    if(answer.empty())
        answer.push_back(-1);
    
    return answer;
}