#include <string>
#include <vector>

using namespace std;

// 나누었을 때 나머지가 0이면 해당 수의 약수가 된다.
// 계속 더해주어야 하니 for문을 썼다.
// n % i (해당 수)에 계속 1부터 해당 수까지 나머지 연산을 해야하니 for문 안에 넣었다.

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i <= n; i++) {
        if(0 == n % i) {
            answer += i;
        }
    }
    
    return answer;
}