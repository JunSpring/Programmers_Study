#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    int mode = 0;
    
    istringstream iss(my_string);
    string token;
    
    while(iss >> token)
    {
        if(token == "+" || token == "-")
            mode = (token=="+") ? 1 : 2;
        
        else
        {
            if(mode == 0)
                answer = stoi(token);
            else if(mode == 1)
                answer += stoi(token);
            else
                answer -= stoi(token);
        }
    }
    
    return answer;
}