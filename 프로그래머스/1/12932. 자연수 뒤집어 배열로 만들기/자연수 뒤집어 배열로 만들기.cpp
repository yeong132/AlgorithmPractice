#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int result; // 1의 자리수(점점 배열에 들어가면서 10의자리이던게 1의자리로 가는식)
    int digit = 0;  // 자릿수
    long long temp = n;   // 첫 자연수 복사값
    
    // 1. n의 1의 자리수부터 배열에 들어가게 된다.
    // 2. 그 후 10, 100, 1000의 자리의 수가 배열에 들어간다.
    // 3. n의 자릿수 만큼 pushback()이 되어야 한다.
    // 4. push_back()함수는 벡터의 마지막 부분에 원소를 추가하는 것이다.
    // 5. 1의 자리보다 작아질때까지 n의 자릿수를 구하는 while문 만들어야 된다!
    // 6. while문을 빠져나올 수 있는 이유는 1/10의 값이 temp가 int(정수형)이라서
    // 7. 1/10의 연산값이 0.1로 안나오고 소수점을 버려 0으로 나오기 때문에 가능하다.
    while(temp > 0) {
        temp /= 10;
        digit++;
    }
    
    // 실행하다 오류를 발견해서 자연수가 0인경우의 예외처리를 해주었다.
    if(n == 0) digit = 1;
    
    for(int i = 0; i < digit; ++i) {
        result = n % 10;
        n = n / 10;
        answer.push_back(result);
    }
    
    return answer;
}