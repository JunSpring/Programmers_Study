#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    int c;
    while (b)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
    vector<int> answer(2);

    int new_numer = numer1 * denom2 + numer2 * denom1;
    int new_denom = denom1 * denom2;

    int common = gcd(new_numer, new_denom);
    new_numer /= common;
    new_denom /= common;

    answer[0] = new_numer;
    answer[1] = new_denom;

    return answer;
}