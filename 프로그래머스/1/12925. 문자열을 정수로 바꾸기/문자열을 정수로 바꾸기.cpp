#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    // string을 int로 바꾸어주기 위해서 stoi() 함수를 쓴다. 검색을 통해 알게 되었다
    // stoi는 string to integer의 줄임말이다!
    answer = stoi(s);
    
    return answer;
}