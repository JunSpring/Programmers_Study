#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) 
{
    vector<int> answer(2);
    
    int max_coffee = money / 5500;
    int left_money = money % 5500;
    
    answer.at(0) = max_coffee;
    answer.at(1) = left_money;
    
    return answer;
}