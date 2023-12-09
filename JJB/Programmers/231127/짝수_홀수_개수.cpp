#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) 
{
    vector<int> answer;
    
    int even_num = 0;
    int odd_num = 0;
    
    for(const auto &num : num_list)
    {
        if(num%2==0)
            even_num++;
        else
            odd_num++;
    }
    
    answer.push_back(even_num);
    answer.push_back(odd_num);
    
    return answer;
}