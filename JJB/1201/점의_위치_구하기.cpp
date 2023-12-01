#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) 
{
    int answer = 0;
    
    int x = dot[0];
    int y = dot[1];
    
    switch((x>0)*2+(y>0))
    {
        case 3:
            answer = 1;
            break;
        case 1:
            answer = 2;
            break;
        case 0:
            answer = 3;
            break;
        default:
            answer = 4;
            break;
    }
    
    return answer;
}