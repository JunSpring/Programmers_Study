#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    
    nth_element(array.begin(), array.begin() + array.size()/2, array.end());
    answer = array[array.size()/2];
    
    return answer;
}