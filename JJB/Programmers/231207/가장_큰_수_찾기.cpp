#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) 
{
    vector<int> answer(2);
    
    auto max_ele = max_element(array.begin(), array.end());
    answer[0] = *max_ele;
    answer[1] = max_ele - array.begin();
    
    return answer;
}