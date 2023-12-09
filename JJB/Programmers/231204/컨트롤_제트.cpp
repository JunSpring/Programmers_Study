#include <string>
#include <vector>
#include <sstream>
#include <numeric>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    vector<string> numbers;
    
    istringstream iss(s);
    string token;
    
    while(iss >> token)
    {
        if(token != string(1, 'Z'))
            numbers.push_back(token);
        else
            numbers.pop_back();
    }
    
    answer = accumulate(numbers.begin(), numbers.end(), 0, [](int a, const string &b){ return a+stoi(b); });
    
    return answer;
}