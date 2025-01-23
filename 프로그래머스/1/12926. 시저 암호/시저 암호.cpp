#include <string>
#include <vector>
#include <cctype>

using namespace std;

// ASCII 코드 문자에 숫자를 더하면 더한만큼의 다음 ASCII 문자가 char 형으로 반환된다.
// z를 밀면 a가 되어야하는데 다른 특수문자로 되버린다.
// 그래서 밀었을 때 뭔가 조치를 해야한다.
string solution(string s, int n) {
    string answer = "";
    
    for(char word : s) 
    {
        if(word == ' ')
        {
            answer += ' ';
        }
        else if(isupper(word)) // 대문자인 경우
        {
            // 1. 결과의 범위 생각 -> 2. 그 범위가 나오기 위한 수식 생각
            // 결과가 A~Z까지 나와야한다. 'A'에서 n에 따라 A~Z 중 결과가 나와야한다.
            // 'A' + () % 26이라면 A에 0~25까지 더해주니 A~Z까지 결과 출력을 만족한다.
            // 괄호 안에는 입력에 따라 movedWord에 영향을 받으니 word와 n 둘 다 있어야한다.
            // 이제 하나하나 가상의 입력을 넣어보며 뭐가 문제인지 파악하고 적절한 수식을 떠올려보자.
            char movedWord = 'A' + (word - 'A' + n) % 26;
            answer += movedWord;
        }
        else if(islower(word)) // 소문자인 경우
        {
            char movedWord = 'a' + (word - 'a' + n) % 26;
            answer += movedWord;
        }
    }
    return answer;
}