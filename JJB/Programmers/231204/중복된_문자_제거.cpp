#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    string duple = "";
    
    for(const char &s : my_string)
    {
        if(duple.find(s) == string::npos)
        {
            answer.push_back(s);
            duple.push_back(s);
        }
    }
    
    return answer;
}