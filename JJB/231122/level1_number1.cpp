#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s, int n)
{
    string answer = "";

    for (const auto& i : s)
    {
        if (i == ' ')
            answer.push_back(' ');
        else if ('a' <= i && i <= 'z')
            answer.push_back((i + n - 97) % 26 + 97);
        else
            answer.push_back((i + n - 65) % 26 + 65);
    }

    return answer;
}