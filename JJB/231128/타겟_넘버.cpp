#include <string>
#include <vector>

using namespace std;

int dfs(vector<int> &numbers, const int &target, int current, int depth)
{
    if(depth == numbers.size())
    {
        if(target == current)
            return 1;
        
        return 0;
    }
    
    return dfs(numbers, target, current+numbers[depth], depth+1) + dfs(numbers, target, current-numbers[depth], depth+1);
}

int solution(vector<int> numbers, int target) 
{
    int answer = 0;
    
    answer = dfs(numbers, target, 0, 0);
    
    return answer;
}