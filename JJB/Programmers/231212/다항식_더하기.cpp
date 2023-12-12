#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string polynomial) 
{
    string answer = "";
    
    int x = 0;
    int num = 0;
    
    string token;
    istringstream iss(polynomial);
    
    while(iss >> token)
    {
        int n = token.size();
        
        if (token == "+")
            continue;
        else if (token[n-1] == 'x')
        {
            if (n == 1)
                x += 1;
            else
                x += stoi(string(token.begin(), token.end()-1));
        }
        else
            num += stoi(token);
    }
    
    if (x != 0)
    {
        if (x != 1)
            answer += to_string(x);
        answer += 'x';
    }
    if (num != 0)
    {
        if(!answer.empty())
            answer += " + ";
        answer += to_string(num);
    }
    
    return answer;
}