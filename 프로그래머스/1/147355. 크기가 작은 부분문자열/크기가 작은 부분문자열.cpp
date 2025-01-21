#include <string>
#include <vector>

using namespace std;

//p.size가 1일때 4까지 돈다.
//p.size가 2일때 3까지 돈다.
//p.size-1한 만큼을 t.size 길이에 빼준다.
int solution(string t, string p) {
    int answer = 0;
    int tpDif = p.size()-1;
    
    // t의 배열안에 p의 길이만큼 문자열을 얼마나 반복해서 계산할 지 for문으로 생각했다.
    for(int i = 0; i < t.size() - tpDif; ++i)
    {
        string subT = "";
        for(int j = 0; j < p.size(); ++j)
        {
            subT += t[i+j];
        }
        
        // p의 길이가 10이상일 때 "2147483648"을 넘으면 정수범위를 초과하니 long타입으로 계산하자.
        if(stol(subT) <= stol(p))
        {
            answer++;
        }
    }
    return answer;
}