#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 1. 문자열의 첫글자부터 읽는다.
// 2. 첫글자를 기준으로 각각 첫글자가 나온 횟수와 다른 글자들이 나온 횟수를 센다.
// 3. 두 횟수가 같아지면 그만 세고, 지금까지 읽은 문자열을 분리한다.
// 4. 남은 문자열도 1~3의 과정을 반복한다.
// 5. 두 횟수가 다른 상태에서 더이상 읽을 글자가 없어도, 지금까지 읽은 문자열을 분리하고 종료한다.
// 6. 분리한 문자열의 개수를 반환한다.

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    char* str = strdup(s);  // 자동으로 malloc + strcpy 수행!
    char* original = str;  // 원래 주소 저장
    char temp = str[0];
    
    int firstWordCount = 0;
    int difWordCount = 0;
    int substrCount = 0;
    int wordLength = strlen(str);
    
    for(int i = 0; i < wordLength; ++i)
    {
        if(str[i] == temp)
        {
            firstWordCount++;
        }
        else
        {
            difWordCount++;
        }
        
        if(firstWordCount == difWordCount)
        {
            firstWordCount = 0;
            difWordCount = 0;
            
            if(i + 1 < wordLength)
            {
                temp = str[i+1];
            }
            
            substrCount++;
        }
    }
    
    if(firstWordCount != difWordCount)
    {
        substrCount++;
    }
    free(original);  // malloc으로 동적 할당해주었기에 메모리 해제해주어야 함
    
    return substrCount;
}