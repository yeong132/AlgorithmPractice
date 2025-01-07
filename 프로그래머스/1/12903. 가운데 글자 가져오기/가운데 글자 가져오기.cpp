#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int startIndex = 0;
    
    // 1,2글자면 바로 출력되게게
    if(s.size()==1||s.size()==2){
        return s;
    }
    // s길이가 짝수면 가운데 2글자 반환
    // substr() 뒤에오는 매개변수는 인덱스 시작 위치에서 원소를 몇개 반환할지를 결정
    else if(s.size()%2==0){
        startIndex = s.size()/2-1;
        answer = s.substr(startIndex, 2);
    }
    // s길이가 홀수면 가운데 1글자 반환
    else {
        startIndex = s.size()/2;
        answer = s.substr(startIndex, 1);
    }
    
    return answer;
}