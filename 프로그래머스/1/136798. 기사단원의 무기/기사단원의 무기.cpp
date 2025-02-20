#include <string>
#include <vector>

using namespace std;

int divisorCount(int a)
{
    if(a == 1) return 1;
    
    int count = 0; // 초깃값을 0으로 설정

    // 약수를 찾을 때 큰 수가 들어온다면 시간이 너무 오래 걸린다. 그래서 제곱근을 사용.
    for(int i = 1; i * i <= a; ++i)
    {
        if(a % i == 0)
        {
            if(i * i == a) 
            {
                count++;  // 제곱근인 경우 한 번만 증가
            }
            else 
            {
                count += 2;  // i와 a / i 모두 약수이므로 +2
            }
        }
    }
    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    // 1부터 number까지 약수의 개수를 구한다.
    for(int i = 1; i <= number; ++i)
    {
        // 제한보다 약수의 개수가 크면 power을 더해준다.
        if(divisorCount(i) > limit)
        {
            answer += power;
        }
        // 제한보다 약수의 개수가 같거나 작으면 그 값을 answer에 더함.
        else
        {
            answer += divisorCount(i);
        }
    }
    
    return answer;
}