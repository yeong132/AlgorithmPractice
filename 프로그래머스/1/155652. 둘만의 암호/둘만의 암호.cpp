#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 1. 암호 문자열의 암호 문자에 index를 먼저 더한다.
// 2. (암호문자의 아스키코드+1) ~ (암호문자의 아스키코드+index)까지
// 3. 암호문자마다 각각 건너뛸 문자의 아스키코드가 있으면 그만큼 건너뛸 값을 더해준다.
// 4. 그러면 해독 문자가 되는데 그 값을 정답 문자열에 넣어주면 끝!
string solution(string s, string skip, int index) {
    string answer = "";
    
    for(char lockedChar : s)
    {
        int realIndex = index;
        int skipCount = 0;
        
        for(int i = 1; i <= realIndex; ++i)
        {
            // 'a' == 97, 'z' == 122 , 'z' - 'a' = 25
            char unlockingChar = 'a' + (lockedChar - 'a' + i) % 26;
                
            for(char skipChar : skip)
            {
                if(unlockingChar == skipChar)
                {
                    realIndex++;
                }
            }
        }      
        
        char unlockedChar = 'a' + (lockedChar - 'a' + realIndex) % 26;   
        answer += unlockedChar;
    } 
    return answer;
}