#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> numbers) 
{
    double answer = 0;
    
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    answer = double(sum) / numbers.size();
    
    return answer;
}