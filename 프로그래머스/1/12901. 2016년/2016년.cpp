#include <string>
#include <vector>

using namespace std;

// 계산시 a과 b에 둘 다 영향을 받아야 한다.
// 1월 이라면 1일전인 0에 값을 설정하면 1월 1일은 a+b의 형태로 나타낼 수 있다.
string solution(int a, int b) {
    string answer = "";
    int CalculatedDay = 0;
    
    if(a == 1) CalculatedDay = 0;
    if(a >= 2) CalculatedDay += 31;
    if(a >= 3) CalculatedDay += 29;
    if(a >= 4) CalculatedDay += 31;
    if(a >= 5) CalculatedDay += 30;
    if(a >= 6) CalculatedDay += 31;
    if(a >= 7) CalculatedDay += 30;
    if(a >= 8) CalculatedDay += 31;
    if(a >= 9) CalculatedDay += 31;
    if(a >= 10) CalculatedDay += 30;
    if(a >= 11) CalculatedDay += 31;
    if(a == 12) CalculatedDay += 30;
    
    if ((CalculatedDay + b) % 7 == 1)
    {
        answer = "FRI";
        return answer;
    }
    else if ((CalculatedDay + b) % 7 == 2)
    {
        answer = "SAT";
        return answer;
    }
    else if ((CalculatedDay + b) % 7 == 3)
    {
        answer = "SUN";
        return answer;
    }
    else if ((CalculatedDay + b) % 7 == 4)
    {
        answer = "MON";
        return answer;
    }
    else if ((CalculatedDay + b) % 7 == 5)
    {
        answer = "TUE";
        return answer;
    }
    else if ((CalculatedDay + b) % 7 == 6)
    {
        answer = "WED";
        return answer;
    }
    else if ((CalculatedDay + b) % 7 == 0)
    {
        answer = "THU";
        return answer;
    } 
}