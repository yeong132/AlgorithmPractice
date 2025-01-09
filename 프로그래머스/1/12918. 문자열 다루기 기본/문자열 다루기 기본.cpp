#include <string>
#include <vector>
#include <cctype> // isdigit()을 사용하기 위해 추가

using namespace std;

bool solution(string s) {
    int size = s.size();
    
    // return값이 반환되면 해당 함수도 종료되므로 for문은 알아서 종료됨.
    // 만약 문자열이 다 숫자라면 for문안의 return이 실행되지 않아 밑으로 갈 것이다.
    for(char ch : s){
        if(!isdigit(ch))
            return false;
    }
    
    // 문자열이 다 숫자인 것은 확인했다. 여기서 길이까지 확인해보자.
    if(size == 4 || size == 6){
        return true;
    }
    else return false;
}