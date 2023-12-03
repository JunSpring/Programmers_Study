#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) 
{
    vector<int> answer;
    
    transform(numbers.begin(), numbers.end(), back_inserter(answer), [](int x){ return x*2; });
    
    return answer;
}