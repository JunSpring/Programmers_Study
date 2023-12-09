#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string skill, vector<string> skill_trees)
{
    int answer = 0;

    for (const auto& skill_tree : skill_trees)
    {
        string skill_string;
        copy_if(skill_tree.begin(), skill_tree.end(), back_inserter(skill_string),
            [&](char c) { return skill.find(c) != string::npos; });

        if (equal(skill_string.begin(), skill_string.end(), skill.begin()))
            answer++;
    }

    return answer;
}