#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    
    int n = numbers.size();
    int positive_multi = numbers[n-2] * numbers[n-1];
    int negative_multi = numbers[0] * numbers[1];
    
    answer = max(positive_multi, negative_multi);
    
    return answer;
}