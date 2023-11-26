#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int c;
    while(b)
    {
        c = b;
        b = a % b;
        a = c;
    }
    return a;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int solution(int n) 
{
    int answer = 0;
    
    answer = lcm(n, 6) / 6;
    
    return answer;
}