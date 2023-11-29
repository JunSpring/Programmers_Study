#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) 
{
    int answer = 0;
    
//     vector<int> rows;
//     vector<int> cols;
    
//     for(const auto &size : sizes)
//     {
//         rows.push_back(max(size.at(0), size.at(1)));
//         cols.push_back(min(size.at(0), size.at(1)));
//     }
    
//     answer = *max_element(rows.begin(), rows.end()) * *max_element(cols.begin(), cols.end());
    
    int row = 0;
    int col = 0;
    
    for(const auto & size : sizes)
    {
        row = max(row, max(size.at(0), size.at(1)));
        col = max(col, min(size.at(0), size.at(1)));
    }
    answer = row * col;
    
    return answer;
}