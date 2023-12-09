#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    vector<vector<int>> answer;
    
    size_t cols_size = arr1.size();
    size_t rows_size = arr1.at(0).size();
    
    for(int col = 0; col < cols_size; col++)
    {
        vector<int> temp;
        for(int row = 0; row < rows_size; row++)
            temp.push_back(arr1.at(col).at(row) + arr2.at(col).at(row));
        answer.push_back(temp);
    }
    
    return answer;
}