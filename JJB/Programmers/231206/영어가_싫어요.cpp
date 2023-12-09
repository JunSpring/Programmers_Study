#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

long long solution(string numbers) 
{
    long long answer = 0;
    
//     vector<string> number_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
//     for(int i = 0; i < number_strings.size(); i++)
//     {
//         int index;
//         int size = number_strings[i].size();
//         while((index = numbers.find(number_strings[i])) != string::npos)
//             numbers.replace(index, size, to_string(i));
//     }
    
//     answer = stoll(numbers);
    
    // 영어 단어와 숫자의 대응 관계를 나타내는 맵 생성
    unordered_map<string, int> wordToNumber = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
    };

    // 문자열을 순회하면서 영어 단어를 찾아 숫자로 변환
    for (int i = 0; i < numbers.length();)
    {
        for (int j = 5; j >= 3; --j)
        {
            string word = numbers.substr(i, j);
            if (wordToNumber.find(word) != wordToNumber.end())
            {
                answer = answer * 10 + wordToNumber[word];
                i += j; // 다음 단어로 이동
                break;
            }
        }
    }
    
    return answer;
}
