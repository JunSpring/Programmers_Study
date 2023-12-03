#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<int> emergency) 
{
    vector<int> answer;
    
    vector<int> sorted_emergency(emergency);
    sort(sorted_emergency.begin(), sorted_emergency.end(), greater<int>());
    
    // transform(emergency.begin(), emergency.end(), back_inserter(answer), [&sorted_emergency](int x){ return find(sorted_emergency.begin(), sorted_emergency.end(), x)-sorted_emergency.begin()+1; });
    
    unordered_map<int, int> index_map;
    for (int i = 0; i < sorted_emergency.size(); ++i)
        index_map[sorted_emergency[i]] = i + 1;

    transform(emergency.begin(), emergency.end(), back_inserter(answer), [&index_map](int x) { return index_map[x]; });
    
    return answer;
}