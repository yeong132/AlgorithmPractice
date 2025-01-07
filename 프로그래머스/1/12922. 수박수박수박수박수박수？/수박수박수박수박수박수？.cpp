#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    // index인 i가 짝수일 때 "수"를 출력, 홀수면 "박"을 출력하게 했다!!
    for(int i = 0; i < n; ++i){
        (i%2==0) ? answer.append("수") : answer.append("박");
    }
    
    return answer;
}