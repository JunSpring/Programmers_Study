#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    string f(my_string.begin(),my_string.begin()+s);
    string m(my_string.begin()+s,my_string.begin()+s+e);
    string l(my_string.begin()+s+e,my_string.end());
    
    cout<<m;
    return answer;
}