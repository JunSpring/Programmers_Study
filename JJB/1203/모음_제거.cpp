#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    
    // string mother = "aeiou";
    // for(const auto &text : my_string)
    //     if(mother.find(text) == string::npos)
    //         answer.push_back(text);
    
    my_string.erase(remove_if(my_string.begin(), my_string.end(),
                              [](char ch) { return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'; }),
                   my_string.end());
    answer = my_string;
    
    return answer;
}