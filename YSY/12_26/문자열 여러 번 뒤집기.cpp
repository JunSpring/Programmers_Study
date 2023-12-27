#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) 
{
    string answer = "";
    for (vector<int> query:queries)
    {
        string s(my_string.begin(),my_string.begin()+query[0]);
        string m(my_string.begin()+query[0],my_string.begin()+query[1]+1);
        string e(my_string.begin()+query[1]+1,my_string.end());
        
        reverse(m.begin(),m.end());
        
        my_string=s+m+e;
    }
    answer=my_string;
    return answer;
}