#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string number) {
    int answer = 0;
    for(char i : number)
    {
        answer+=i-'0';   
    }
    answer=answer%9;
    return answer;
}