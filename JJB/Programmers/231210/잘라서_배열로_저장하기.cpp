#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) 
{
    vector<string> answer;

    int length = my_str.length();
    int index = 0;

    while (index < length) 
    {
        answer.push_back(my_str.substr(index, n));
        index += n;
    }

    return answer;
}
