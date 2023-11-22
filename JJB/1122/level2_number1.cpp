#include <string>
#include <vector>

using namespace std;

int add(const int& begin, const int& end)
{
    int all = end * (end + 1) / 2;
    int erase = (begin - 1) * begin / 2;
    int sum = all - erase;

    return sum;
}

int solution(int n)
{
    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        int end = i;
        while (1)
        {
            int sum = add(i, end);
            if (sum < n)
                end++;
            else if (sum == n)
            {
                answer++;
                break;
            }
            else
                break;
        }
    }

    return answer;
}