#include <string>
#include <vector>

using namespace std;

// signs에서 true면 absolutes 원소를 결과에 +, false면 결과에 - 해주면 될거 같다.
int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    //이번엔 향상된 for문보다 그냥 for문이 더 나을거 같다.
    for(int i = 0; i < absolutes.size(); ++i) {
        if(true == signs[i])
            answer += absolutes[i];
        else answer -= absolutes[i];
    }
    
    return answer;
}