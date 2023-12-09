#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) 
{
    string answer = "";
    
    for(const auto &query : queries)
    {
        string left(my_string.begin(), my_string.begin()+query[0]);
        string middle(my_string.begin()+query[0], my_string.begin()+query[1]+1);
        string right(my_string.begin()+query[1]+1, my_string.end());
        
        reverse(middle.begin(), middle.end());
        
        my_string = left + middle + right;
    }
    answer = my_string;
    
    return answer;
}