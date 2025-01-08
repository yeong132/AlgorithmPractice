#include <string>
#include <vector>

using namespace std;

// 약수 구하는 법을 생각해보자..
int solution(int left, int right) {
    int answer=0;
    
    for(int i = left; i <= right; ++i){
        // 약수의 개수 선언
        int x=0;
        
        for(int j = 1; j <= i; ++j){
            // 여기서 left가 아닌 i를 넣어서 계속 1씩 더해지는 값을 넣도록 하자!
            if(i%j==0){
                x++;
            }
        }
        if(x % 2 == 0) {
            answer += i;
        }
        else {
            answer -= i;
        }
    }
    
    return answer;
}