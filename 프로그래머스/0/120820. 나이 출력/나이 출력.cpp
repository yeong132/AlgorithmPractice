#include <string>
#include <vector>

using namespace std;

// 최대한 간단한 예시를 생각해보자
// 2022년 기준 나이가 2다. 그 사람은 21년생.
// 그러면 '2022 - age'보다 1 큰 값이 출생연도가 된다.
int solution(int age) {
    int birthStandard = 2022;
    int answer = birthStandard - age + 1;
    return answer;
}