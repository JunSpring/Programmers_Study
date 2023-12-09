#include <string>
#include <vector>
#include <sstream>

using namespace std;

bool is_correct(const string &quiz)
{
    stringstream ss(quiz);
    
    int x, y, z;
    char op, _;
    
    ss >> x >> op >> y >> _ >> z;
    
    if(op == '+')
        return x + y == z;
    else
        return x - y == z;
}

vector<string> solution(vector<string> quizs) 
{
    vector<string> answer;
    
    for(const string &quiz : quizs)
    {
        if(is_correct(quiz))
            answer.push_back("O");
        else
            answer.push_back("X");
    }
    
    return answer;
}