#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
    vector<int> left;
    vector<int> right;
    
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        {
            left.push_back(i);
            if(i != sqrt(n))
                right.insert(right.begin(), n/i);
        }
    }
    
    merge(left.begin(), left.end(), right.begin(), right.end(), back_inserter(answer));
    
    return answer;
}