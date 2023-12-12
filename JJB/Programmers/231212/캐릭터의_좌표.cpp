#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinputs, vector<int> board) 
{
    vector<int> answer;
    
    vector<int> xy = {0, 0};
    int x_limit = board[0] / 2;
    int y_limit = board[1] / 2;
    
    for(const string &ki : keyinputs)
    {
        vector<int> prev = xy;
        
        if (ki == "up")
            prev[1]++;
        else if(ki == "down")
            prev[1]--;
        else if (ki == "left")
            prev[0]--;
        else if(ki == "right")
            prev[0]++;
        
        if (abs(prev[0]) <= x_limit && abs(prev[1]) <= y_limit)
            xy = prev;
    }
    
    answer = xy;
    
    return answer;
}