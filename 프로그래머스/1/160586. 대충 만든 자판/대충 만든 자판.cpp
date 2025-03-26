#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;

    // 알파벳 문자마다 최소 키 누름 횟수 저장 (A~Z는 총 26개)
    int minPress[26]; // 'A' ~ 'Z'
    for(int i = 0; i < 26; ++i)
    {
        minPress[i] = 101;
    }
    
    for(const string& key : keymap)
    {
        for(int i = 0; i < key.size(); ++i)
        {
            int index = key[i] - 'A';
            
            // 문자열의 문자의 인덱스가 더 빨리 읽힌다면 최소 횟수니까 
            // 그 경우만 키 누를 최소 횟수 갱신
            if(minPress[index] > i + 1)
            {
                minPress[index] = i + 1;  
            }
        }
    }
    
    for(const string& target : targets)
    {
        int total = 0;
        bool valid = true;
        
        for(char charTarget : target)
        {
            // char 타입은 연산시 ASCII코드로 계산되어 각 문자를 숫자값으로 저장 가능
            int targetAlphabetIndex = charTarget - 'A';
            
            if(minPress[targetAlphabetIndex] == 101)
            {
                valid = false;
                break;
            }
            
            total += minPress[targetAlphabetIndex];
        }
        answer.push_back(valid ? total : -1);
    }
    
    return answer;
}