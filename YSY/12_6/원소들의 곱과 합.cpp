#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int a=1;
    int b=0;
    for (int& i:num_list)
    {
        a*=i;
        b+=i;
    }
    if (a<b*b)
    {
        answer=1;
    }
    return answer;
}