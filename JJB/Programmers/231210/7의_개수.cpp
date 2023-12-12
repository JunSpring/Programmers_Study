#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    
    for(const int &number : array)
    {
        int temp = number;
        
        while(temp)
        {
            if(temp % 10 == 7)
                answer++;
            temp /= 10;
        }
    }
    
    return answer;
}