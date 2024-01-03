#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for (int i=l;i<=r;i++)
    {
        int num=i;
        while(num!=0)
        {
            if (num%10==0 || num%10==5)
                num=num/10;
            else
                break;
        }
        if(num==0)
            answer.push_back(i);
    }
    if (answer.size()==0)
        answer.push_back(-1);
    return answer;
}