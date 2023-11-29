#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) 
{
    string answer = "";
    
    // copy_if(my_string.begin(), my_string.end(), back_inserter(answer), [&](char c){ return c != letter.at(0); });
    
    my_string.erase(remove(my_string.begin(), my_string.end(), letter.at(0)), my_string.end());
    answer = my_string;
    
    return answer;
}