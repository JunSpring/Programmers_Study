#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string str1, string str2) 
{
    int answer = 0;
    
    int is_find = str1.find(str2) != string::npos;
    answer = 2 - is_find;
    
    return answer;
}