#include <string>
#include <vector>
#include <numeric>

using namespace std;

string solution(string code) 
{
    string answer = "";
    bool mode = false;
    
    for(int idx = 0; idx < code.size(); idx++)
    {
        if(code[idx] == '1')
            mode = !mode;
        else if(!mode && idx%2==0)
            answer.push_back(code.at(idx));
        else if(mode && idx%2==1)
            answer.push_back(code.at(idx));
    }
    
    if(answer.empty())
        answer = "EMPTY";
    
    return answer;
}