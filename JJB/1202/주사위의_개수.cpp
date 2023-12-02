#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

using namespace std;

int solution(vector<int> box, int n) 
{
    int answer = 0;
    
    vector<int> temp;
    transform(box.begin(), box.end(), back_inserter(temp), [&](int x){ return x/n; });
    answer = accumulate(temp.begin(), temp.end(), 1, multiplies<int>());
    
    return answer;
}