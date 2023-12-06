#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string even="";
    string odd="";
    for (int& i:num_list)
    {
        if (i%2==0)
        {
            even+=to_string(i);
        }
        else if (i%2==1)
        {
            odd+=to_string(i);
        }
    }
    answer=stoi(odd)+stoi(even);
    return answer;
}