#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> array, int n) 
{
    int answer = 0;
    
    for(const int &num : array)
        if(num == n)
            answer++;
    
    return answer;
}