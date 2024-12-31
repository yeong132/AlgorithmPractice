#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    
    // a가 b보다 작으면 a가 b랑 같아질때까지 answer에 더하면 된다.
    // 나는 while문을 쓸거라 같아진 값을 answer에 넣기 위해 조건에 b+1을 해주었다.
    if(a == b) return a;
    else if(a < b) {
        while(a != b + 1) {
            answer += a;
            a++;
        }
    }
    else if(b < a) {
        while(b != a + 1) {
            answer += b;
            b++;
        }
    }
    
    return answer;
}