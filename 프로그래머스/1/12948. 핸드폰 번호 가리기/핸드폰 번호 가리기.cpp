#include <string>
#include <vector>

using namespace std;

// 1. 결과값의 형태를 생각해보자. phone_number을 배열이라고 생각하면
// 2. 마지막에서 첫 원소로 for문이 있으면 4번째 원소를 지났을때 다른 원소를 다 *로 바꿔주면 된다.

string solution(string phone_number) {
    int p = 0;
    
    // string 관련 메서드를 몰라 관련 함수들을 블로그에서 찾았다.
    // string 생성자는 gpt의 도움을 받았다.
    // .replace(시작 index의 위치, 끝 index의 위치, 교체할 문자열) << 이렇게 쓰면
    // 기존 문자열의 시작 index부터 끝 index까지의 문자열을 교체할 수 있다!
    // string(생성할 문자 수, 생성할 문자) << 이렇게 쓰면
    // string의 생성자가 생성할 문자 수만큼의 문자열을 만들어준다.
    p = phone_number.size()-4;
    if(0 != p){
        phone_number.replace(0, p, string(p, '*'));
    }
    
    return phone_number;
}