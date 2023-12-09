#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int num, int k) 
{
    int answer = 0;
    
    string num_str = to_string(num);
    char k_char = k + '0';
    
    int index = find(num_str.begin(), num_str.end(), k_char)-num_str.begin();
    
    if(index != num_str.size())
        answer = index+1;
    else
        answer = -1;
    
    return answer;
}