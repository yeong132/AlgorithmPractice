#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int count = 0;
    
    // 1이 주어지면 while문 실행안하고 초기값인 0을 반환하게!
    while(1 != num) {
        // count가 500번 이상이되면 -1을 반환하고 while문을 빠져나오게!
        if(count < 500) {
            if(0 == num % 2) {
                num /= 2;
            } 
            else if(1 == num % 2) {
                num = num * 3 + 1;
            }
            count++;
        } else {
            count = -1;
            break; // break문은 가장 가까운 반복문을 빠져나가게 해준다. if문과는 상관없다.
        }
    }
    
    return count;
}