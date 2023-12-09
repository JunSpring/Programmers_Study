#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    
    int first_max = max(numbers[0], numbers[1]);
    int second_max = min(numbers[0], numbers[1]);
    
    for(const auto &number : vector<int>(numbers.begin()+2, numbers.end()))
    {
        second_max = max(second_max, number);
        int temp = max(first_max, second_max);
        second_max = min(first_max, second_max);
        first_max = temp;
    }
    
    answer = first_max * second_max;
    
    return answer;
}