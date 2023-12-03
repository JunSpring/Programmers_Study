#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spells, vector<string> dic) 
{
    for(const auto &word : dic)
    {
        if(word.size() == spells.size())
        {
            int count = 0;
            for(const auto &spell : spells)
            {
                if(word.find(spell) == string::npos)
                    continue;
                count++;
            }
            if(count == spells.size())
                return 1;
        }
    }
    
    return 2;
}