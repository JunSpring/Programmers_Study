#include <string>
#include <vector>
#include <climits>

using namespace std;

int solution(vector<int> array, int n) 
{
    int answer = 0;
    int min_dist = INT_MAX;
    
    for(const auto &num : array)
    {
        int dist = abs(num-n);
        if(min_dist > dist || (min_dist == dist && num < answer))
        {
            min_dist = dist;
            answer = num;
        }
    }
    
    return answer;
}