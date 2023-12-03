#include <string>
#include <vector>

using namespace std;

int fact(float n, int depth)
{
    if (n < 1)
        return depth - 2;

    return fact(n / depth, depth + 1);
}

int solution(int n)
{
    int answer = fact(n, 1);
    return answer;
}
