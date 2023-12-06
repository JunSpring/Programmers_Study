#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string ab=to_string(a)+to_string(b);
    string ba=to_string(b)+to_string(a);
    int AB=stoi(ab);
    int BA=stoi(ba);
    
    return max(AB, BA);
}