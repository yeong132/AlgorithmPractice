#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    // n 이하의 짝수를 담을 변수가 필요하다.
    int result = 0;
    
    for(int i = 2; i <= n; i++) { // n의 조건이 0보다 커서 i를 2로 두었다.
        if(0 == i % 2) {  // 'i % 2'가 0이면 짝수다. 
            result += i;  // n이하의 짝수면 결과값에 더해준다.
        }
    }
    return result;
}