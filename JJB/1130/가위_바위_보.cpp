#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iterator>

using namespace std;

string solution(string rsp) 
{
    string answer = "";
    
    unordered_map<char, char> winning_case =
    {
        {'2','0'}, {'0','5'}, {'5','2'}  
    };
    transform(rsp.begin(), rsp.end(), back_inserter(answer), [&](char c){ return winning_case[c]; });
    
    return answer;
}