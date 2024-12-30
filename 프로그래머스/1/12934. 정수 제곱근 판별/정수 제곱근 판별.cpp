#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    // 최적화는 다시 생각해보자..
    for(long long x = 1; x < n + 1; ++x) {
        if(n == x * x) {
            answer = (x + 1) * (x + 1);
            break; // 제곱이라 판단된 결과가 나오면 더이상 for문이 돌지 않게 break!
        } 
        else {
            answer = -1;
        }
    }
    
    return answer;
}