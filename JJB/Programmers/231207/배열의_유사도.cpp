#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<string> s1, vector<string> s2) 
{
    unordered_set<string> set_s1(s1.begin(), s1.end());
    int answer = 0;

    for (const auto& element : s2) 
        if (set_s1.find(element) != set_s1.end())
            answer++;

    return answer;
}
