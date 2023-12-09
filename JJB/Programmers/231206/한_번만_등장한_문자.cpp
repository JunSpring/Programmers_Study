#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iterator>

using namespace std;

string solution(string s) 
{
    string answer = "";
    unordered_map<char, int> char_count;
    
    for(const char &c : s)
        char_count[c]++;
    
    vector<int> unique_char;
    copy_if(s.begin(), s.end(), back_inserter(unique_char), [&char_count](char c){ return char_count[c]==1; });
    
    sort(unique_char.begin(), unique_char.end());
    
    answer = string(unique_char.begin(), unique_char.end());
    
    return answer;
}