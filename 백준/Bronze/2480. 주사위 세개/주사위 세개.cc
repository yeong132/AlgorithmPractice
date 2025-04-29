#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int answer = 0;
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;  // 사용자로부터 주사위 3개 눈 입력 받기
    
    if(num1 == num2 && num2 == num3)
    {
        answer += 10000 + num1 * 1000;
    }
    else if(num1 == num2 || num1 == num3)
    {
        answer += 1000 + num1 * 100;
    }
    else if(num2 == num3)
    {
        answer += 1000 + num2 * 100;
    }
    else
    {
        answer += max({num1, num2, num3}) * 100;
    }
    
    cout << answer;
    
    return 0;
}