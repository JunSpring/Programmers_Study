#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) 
{
    vector<long long> answer;
    
    long long num = 0;
    for(int i = 0; i < n; i++)
        answer.push_back(num += x);
    
    return answer;
}