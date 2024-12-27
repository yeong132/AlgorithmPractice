#include <string>
#include <vector>

using namespace std;

// 1. n을 i로 나눈 나머지가 1이 되도록 한다.
// 2. 그 중에서 제일 작은 값을 반환하려면 0부터 값이 올라간다고 쳤을때
//    처음 한번만 값이 나오면 된다. 그래서 break문을 넣었다!

int solution(int n) {
    int answer = 0;
    
    
    // 나머지가 1이 되려면 i가 0, 1일 때는 그럴 수 없으니 2부터 시작했다.
    for(int i = 2; i < n; i++) {
        if(1 == n % i) {
            answer = i;
            break;
        }
    }
    
    return answer;
}