#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    long int answer = 0;
    
    string odd;
    string even;
    
    for(const auto &num : num_list)
    {
        if(num % 2 == 0)
            even += to_string(num);
        else
            odd += to_string(num);
    }
    
    answer = stoi(even) + stoi(odd);
    
    return answer;
}