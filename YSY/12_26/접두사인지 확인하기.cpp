#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    vector<string> prefix;
    for (int i=0; i<my_string.size();i++)
    {
        prefix.push_back(string(my_string.begin(),my_string.begin()+i));
    }
    for (int i=0;i<prefix.size();i++)
    {
        if (prefix[i]==is_prefix)
        {
            answer=1;
        }
    }
    return answer;
}