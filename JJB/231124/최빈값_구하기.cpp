#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    
    unordered_map<int, int> mode;
    for(const auto &num : array)
        mode[num]++;
    
    int max = 0;
    for(const auto &data : mode)
    {
        if(data.second > max)
        {
            max = data.second;
            answer = data.first;
        }
        else if(data.second == max)
            answer = -1;
    }
    
    return answer;
}