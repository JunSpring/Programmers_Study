#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> solution(vector<string> strlist) 
{
    vector<int> answer;
    
    transform(strlist.begin(), strlist.end(), back_inserter(answer), [](const string &s){ return s.size(); });
    
    return answer;
}