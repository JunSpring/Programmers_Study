#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> sides) 
{
    int answer = 0;
    vector<int> rest_sides(sides);
    
    auto max_side = max_element(sides.begin(), sides.end());
    int max_side_length = *max_side;
    int max_side_index = max_side-sides.begin();
    
    rest_sides.erase(rest_sides.begin()+max_side_index);
    
    answer = 2 - (max_side_length < (rest_sides[0]+rest_sides[1]));
    
    return answer;
}