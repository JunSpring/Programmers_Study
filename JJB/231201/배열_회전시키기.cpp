#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) 
{
    vector<int> answer(numbers.size()-1);
    vector<int>::iterator answer_it;
    vector<int>::iterator numbers_it;
    int left = 0;
    int right = 0;
    
    if(direction == "right")
    {
        right = -1;
        answer_it = answer.begin();
        numbers_it = numbers.end()-1;
    }
    else
    {
        left = 1;
        answer_it = answer.end();
        numbers_it = numbers.begin();
    }
    
    copy(numbers.begin()+left, numbers.end()+right, answer.begin());
    answer.insert(answer_it, numbers_it, numbers_it+1);
    
    return answer;
}