#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (vector<int>& query:queries)
    {
        int s=query[0];
        int e=query[1];
        int k=query[2];
        
        vector<int> values;
        for(int i=s;i<=e;i++)
        {
            if(arr[i]>k)
                values.push_back(arr[i]);         
        }
        
        if(values.empty())
            answer.push_back(-1);
        else
            answer.push_back(*min_element(values.begin(), values.end()));
    }
    return answer;
}