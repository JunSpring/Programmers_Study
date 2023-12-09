#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) 
{
    string answer = "";
    
    for(const auto &str : my_string)
        answer += string(n, str);
    
    return answer;
}