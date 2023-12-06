#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    
    for(const char &c : my_string)
    {
        if(isupper(c))
            answer.push_back(tolower(c));
        else
            answer.push_back(toupper(c));
    }
    
    return answer;
}