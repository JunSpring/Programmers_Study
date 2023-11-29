#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(int age) 
{
    string answer = "";
    
    while(age != 0)
    {
        // answer.push_back(char(age%10+97));
        char temp = age % 10 + 'a';
        answer = temp + answer;
        age /= 10;
    }
    // reverse(answer.begin(), answer.end());
    
    return answer;
}