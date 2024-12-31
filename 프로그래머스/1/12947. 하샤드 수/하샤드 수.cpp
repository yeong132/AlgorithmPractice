#include <string>
#include <vector>

using namespace std;

// 1. 일단 x 자릿수의 합을 구해야함.
// 2. x가 그 합으로 나누어지면 true, 아니면 false
bool solution(int x) {
    bool answer = false;
    int t_res = 0;
    int res = 0;
    int copy_x = x; // 처음 들어온 x값을 유지하기 위해 사용
    
    // res에 x 자릿수의 합 구하기 / 추가설명 : while문은 조건이 0이 되면 밖으로 빠져나간다.
    while(x) {
        t_res = x % 10;
        res += t_res;
        x /= 10;
    }
    
    // 처음 들어온 x값이 res로 나누어 떨어질 때만 하샤드 수가 맞다고 true를 반환
    if(0 == copy_x % res) {
        answer = true;
    }
    
    return answer;
}