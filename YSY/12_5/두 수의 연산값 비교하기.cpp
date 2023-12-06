#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string ab=to_string(a)+to_string(b);
    int AB=stoi(ab);
    return max(AB, 2*a*b);
}