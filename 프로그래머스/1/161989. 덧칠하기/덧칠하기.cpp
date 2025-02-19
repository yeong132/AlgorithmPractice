#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int sectionNum = 0;
    
    // section의 원소에서 m을 더했을때 다음 페인트 시작위치를 담을 변수가 필요했다.
    // 그리고 continue를 써서 조건에 해당하지 않으면 그냥 그 for문 순회는 지나치게 했다.
    for(int i = 0; i < section.size(); ++i)
    {
        if(sectionNum > section[i]) continue;
        else
        {
            answer++;
            sectionNum = section[i]+m;
        }
    }
    return answer;
}