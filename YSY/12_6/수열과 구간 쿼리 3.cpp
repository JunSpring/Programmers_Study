#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int temp=0;
    for (vector<int>&query:queries)
    {
        int i = query[0];
        int j = query[1];
        
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    answer=arr;
    return answer;
}