#include <string>
#include <vector>
#include <climits>

using namespace std;

int solution(vector<vector<int>> dots) 
{
    int answer = 0;
    
    int max_x = INT_MIN;
    int min_x = INT_MAX;
    int max_y = INT_MIN;
    int min_y = INT_MAX;
    
    for(const auto &dot : dots)
    {
        int x = dot[0];
        int y = dot[1];
        
        max_x = max(max_x, x);
        min_x = min(min_x, x);
        max_y = max(max_y, y);
        min_y = min(min_y, y);
    }
    
    answer = (max_x - min_x) * (max_y - min_y);
    
    return answer;
}