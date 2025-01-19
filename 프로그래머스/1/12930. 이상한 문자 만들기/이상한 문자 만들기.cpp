#include <string>
#include <vector>
#include <cctype> // toupper, tolower 함수 사용

using namespace std;

// 소문자 대문자 변환은 ASCII 코드상으로 소문자가 더 작은 번호라 소,대문자의 간격(32)만큼 빼주면 된다.
// 공백이 끝나면 홀짝을 계산하는 index가 0으로 초기화 되어야 한다.
string solution(string s) {
    string answer = "";
    // 단어 기준으로 index 계산하도록 추가!
    int index = 0;
    
    for(int i = 0; i < s.size(); ++i)
    {
        // s[i]의 타입은 char형인걸 기억하자.
        if(s[i] != ' ') 
        {
            // tolower,toupper로 알파벳 소,대문자 변환
            // s[i]는 char형이지만 string 타입에 +를 쓰면 문자열 변환이 가능하다.
            if(index % 2 == 0) 
            {
                answer += toupper(s[i]);
            } 
            else 
            {
                answer += tolower(s[i]);
            }
            index++;
        } 
        else {
            answer += ' ';
            index = 0;
        }
    }
    return answer;
}