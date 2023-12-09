#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> solution(int n, vector<int> numlist) 
{
    vector<int> answer;
    
    copy_if(numlist.begin(), numlist.end(), back_inserter(answer), [&n](const int &x){ return x%n==0; });
    
    return answer;
}