#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    vector<string> suffix;
    for (int i=0;i<my_string.size();i++)
    {
        suffix.push_back(my_string.substr(i,my_string.size()));
    }
    for (string i:suffix)
    {
        if (i==is_suffix)
        {
            answer=1;
            break;
        }
    }
    return answer;
}