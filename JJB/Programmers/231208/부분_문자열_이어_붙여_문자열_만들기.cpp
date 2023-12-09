#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) 
{
    string answer = "";
    
    for(int i = 0; i < parts.size(); i++)
        answer += string(my_strings[i].begin()+parts[i][0], my_strings[i].begin()+parts[i][1]+1);
    
    return answer;
}