#include <string>
#include <vector>
#include<iostream>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    int num;
    for(string str:intStrs)
    {
        num=stoi(str.substr(s,l));
        if (num>k)
            answer.push_back(num);
    }
    return answer;
}