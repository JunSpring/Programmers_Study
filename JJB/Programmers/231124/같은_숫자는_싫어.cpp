#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer(1, arr.at(0));
    
    for(int i = 1; i < arr.size(); i++)
    {
        int prev_num = arr.at(i-1);
        int current_num = arr.at(i);
        
        if(prev_num != current_num)
            answer.push_back(current_num);
    }

    return answer;
}