#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    answer=string(my_string.begin(),my_string.begin()+n);
    return answer;
}