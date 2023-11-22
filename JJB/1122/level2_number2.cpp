#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees)
{
    int answer = 0;
    string skill_string;

    for (auto const& skill_tree : skill_trees)
    {
        skill_string.clear();

        for (auto const& str : skill_tree)
        {
            if (skill.find(str) != string::npos)
                skill_string.push_back(str);
        }

        int result = skill_string.compare(skill.substr(0, skill_string.size()));
        if (!result)
            answer++;
    }

    return answer;
}