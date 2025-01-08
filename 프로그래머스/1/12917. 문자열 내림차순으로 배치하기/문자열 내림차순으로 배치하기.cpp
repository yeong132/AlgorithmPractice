#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 여기에 문자열을 비교하는 게 아닌 문자 하나하나 비교할 것이라 string이 아닌 char을 넣어야한다!
bool comp(char a, char b) {
    return a > b;
}

// greater<char>() 을 사용하지 않은 이유는 아직 잘 몰라서..
string solution(string s) {
    sort(s.begin(), s.end(), comp);
    return s;
}