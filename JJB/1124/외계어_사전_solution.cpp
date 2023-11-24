#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool is_permutation(const string& s1, const string& s2) {
    // 문자열 s1과 s2가 순열 관계인지 확인하는 함수
    string sorted_s1 = s1;
    string sorted_s2 = s2;
    
    sort(sorted_s1.begin(), sorted_s1.end());
    sort(sorted_s2.begin(), sorted_s2.end());
    
    return sorted_s1 == sorted_s2;
}

int solution(vector<string> spells, vector<string> dic) {
    for (const string& word : dic) {
        // 주어진 dic의 각 단어에 대해 spell로 만들 수 있는지 확인
        if (is_permutation(word, accumulate(spells.begin(), spells.end(), string("")))) {
            return 1; // 단어를 만들 수 있다면 1을 반환
        }
    }
    
    return 2; // 모든 단어를 확인한 후에도 만들 수 없다면 2를 반환
}